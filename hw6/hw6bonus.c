#include <stdio.h>
//先把讀進來的數字做調分在直接把值放進陣列中
//需要一個變數來放暫存的值 tempScore，記得不要把學生號也做調分
int Scale (int orgScore){
    float i;
    float ac = 0.01;       //準確度，acuracy
    i=1;
    while(i*i<=orgScore)        //先一大步一大步往前直到最接近的
        ++i;
    while((i*i-orgScore)>ac)    //最後一定會比目標還要大，再來慢慢扣，如果跟目標相差超過要求的準確度就繼續扣
        i = i-ac;
    return i*10;                //最後i就會是開根號出來的值，再把它乘以10傳回去
}

void bubble(int array[100][5], int order[], int nstudent){
    int row, j, tmp, i;
    for(i=0; i<nstudent; ++i)
        order[i] = i+1;
    for(row=0; row<nstudent-1; ++row){                         //用第五行來做依據，如果要交換，整列都要換
        for(j=0; j<nstudent-1-row; ++j){                           
            if(array[j][4]<array[j+1][4]){                  //依據每個學生平均來調換位置，將平均調換順也抄一份給order
                    tmp = array[j][4];
                    array[j][4] = array[j+1][4];
                    array[j+1][4] = tmp;

                    tmp = order[j];
                    order[j] = order[j+1];
                    order[j+1] = tmp;
            }
        }
    }
/*    for(i=0; i<10; ++i)                       //檢查order是否是想要的
        printf("%d\n", order[i]);
        */
}
/*
void myswap(int array[13][5], int row){         //測試，還不能用
    int i, tmp;
    for(i=0; i<5; ++i){
        tmp = array[row+i][i];
        array[row+i][i] = array[row+1][i];
        array[row+1][i] = tmp;
    }
}
*/
int main(){
    int i, j, nstudent=0;
    int array[100][5];                   //最多十學生，有五個欄位，No、數學、英文、程式、平均
    int sdtavg, Avg, Max, Min;          //該學生自己三顆平均、每科平均、該科最高分、該科最低分
    int order[100];                      //用來記錄後面bubble sort在交換的紀錄
    char word[100][100];                 //用來放學生名字

    for(i=0; i<13; ++i)             //初始化，二元陣列要兩個變數控制迴圈
        for(j=0; j<5; ++j)
            array[i][j] = 0;

                                     //一次輸入一行，輸入學生名字、三科分數，名字的話是字串，要分開處理
    for(i=0; scanf("%s %d %d %d", word[i], &array[i][1], &array[i][2], &array[i][3])!=EOF; ++i){      

        ++nstudent;
/*        if(j==0)
            order[i] = array[i][j];         //把第一行學號順便也抄一份給order
*/
        for(j=1; j<4; ++j)          // j 必須要從1開始因為第零列是名字，不用丟去調分
            array[i][j] = Scale(array[i][j]);
    }

    sdtavg = Avg = Max = Min = 0;

    for(i=0; i<nstudent; ++i){            //把每個學生自己三科平均放進陣列
        sdtavg = 0;                 //每一次做完該學生的加總之後必須要重置為零，不然會一直加下去，這樣的話只有第一個學生會是對的
        for(j=1; j<4; ++j){
            sdtavg += array[i][j];
        }
        array[i][4] = sdtavg/3;
    }

    bubble(array, order, nstudent);           //把陣列丟去做排序，順便把order丟過去把調換到最後的位置記下來

/*    for(i=0; i<10; ++i)           //這兩行檢查我的order調換紀錄是我要的
        printf("%d\n", order[i]);
*/

    for(j=1; j<5; ++j){             //算每科的最高分、最低分、平均、用行算，不要用列來算
        Avg = 0;                    //不要把第一、五行算進去因為是學號跟平均
        for(i=0; i<nstudent; ++i){
            if(i == 0)
                Max = Min = array[i][j];
            Avg += array[i][j];
            if( array[i][j] > Max)
                Max = array[i][j];
            if( array[i][j] < Min)
                Min = array[i][j];
        }
        array[i][j] = Avg/nstudent+1;
        array[i+1][j] = Max;
        array[i+2][j] = Min;
    }


    printf("No\tMath\tEnglish\tProg\tAverage\n");
    for(i=0; i<40; ++i)         //印分隔線
        printf("=");
    printf("\n");               //要換行，不然下一個會接在後面

    for(i=0; i<nstudent; ++i){                            //把學號、數學、英文、程式、平均印出來
        printf("%s\t", word[order[i]-1]);           //名字要分開處理，每一行第一列就先印名字，後面印分數跟平均
        for(j=1; j<4; ++j){
            printf("%d", array[order[i]-1][j]);
            if( j == 4 )
                printf("\n");
            else
                printf("\t");
        }
        printf("%d\n", array[i][4]);        //這一行是印出平均，會和三科分數分開印不一起印的原因是如果用order的標籤來印會多1
    }
    
    for(i=0; i<40; ++i)         //印分隔線
        printf("=");

    printf("\n");               //要換行，不然下一個會接在後面

    printf("Avg\t");            //該科目的平均
    for(j=1; j<5; ++j){         //從第二行開始的原因是因為我把第一行拿來當作學號
        printf("%d", array[nstudent][j]);
        if(j == 4)
            printf("\n");
        else
            printf("\t");
    }

    printf("Max\t");            //該科目的最高分數
    for(j=1; j<5; ++j){
        printf("%d", array[nstudent+1][j]);
        if(j == 4)
            printf("\n");
        else
            printf("\t");
    }

    printf("Min\t");            //該科目的最低分數
    for(j=1; j<5; ++j){
        printf("%d", array[nstudent+2][j]);
        if(j == 4)
            printf("\n");
        else
            printf("\t");
    }
    return 0;
}






