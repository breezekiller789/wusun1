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

void bubble(int array[13][5]){
    int row, j, tmp, i;
    for(row=0; row<10-1; ++row){                         //用第五行來做依據，如果要交換，整列都要換
        for(j=0; j<10-1-row; ++j){                           
            if(array[j][4]<array[j+1][4]){
                for(i=0; i<5; ++i){
                    tmp = array[j][i];
                    array[j][i] = array[j+1][i];
                    array[j+1][i] = tmp;
                }
            }
        }
    }
}
/*
void myswap(int array[13][5], int row){
    int i, tmp;
    for(i=0; i<5; ++i){
        tmp = array[row+i][i];
        array[row+i][i] = array[row+1][i];
        array[row+1][i] = tmp;
    }
}
*/
int main(){
    int i, j;
    int array[13][5];  //最多十學生，有五個欄位，No、數學、英文、程式、平均
    int sdtavg, Avg, Max, Min;

    for(i=0; i<13; ++i)             //初始化
        for(j=0; j<5; ++j)
            array[i][j] = 0;

    for(i=0; i<10; ++i)             //把分數輸入之後直接丟給調分程式調分再放回去
        for(j=0; j<4; ++j){
            scanf("%s %d %d %d", word[], &array[i][1], &array[i][2], &array[i][3]);
            if(j != 0 )                             //這行的意思是，不要把學號也一起算
                array[i][j] = Scale(array[i][j]);
        }

    sdtavg = Avg = Max = Min = 0;

    for(i=0; i<10; ++i){            //把每個學生自己三科平均放進陣列
        sdtavg = 0;
        for(j=1; j<4; ++j){
            sdtavg += array[i][j];
            
        }
        array[i][4] = sdtavg/3;
    }

    bubble(array);

    for(j=1; j<5; ++j){             //先用行算，不要用列來算
        Avg = 0;                    //不要把第一、五行算進去因為是學號跟平均
        for(i=0; i<10; ++i){
            if(i == 0)
                Max = Min = array[i][j];
            Avg += array[i][j];
            if( array[i][j] > Max)
                Max = array[i][j];
            if( array[i][j] < Min)
                Min = array[i][j];
        }
        array[i][j] = Avg/10;
        array[i+1][j] = Max;
        array[i+2][j] = Min;
    }


    printf("No\tMath\tEnglish\tProg\tAverage\n");
    for(i=0; i<40; ++i)         //印分隔線
        printf("=");
    printf("\n");               //要換行，不然下一個會接在後面

    for(i=0; i<10; ++i)         //把學號、數學、英文、程式、平均印出來
        for(j=0; j<5; ++j){
            printf("%d", array[i][j]);
            if( j == 4 )
                printf("\n");
            else
                printf("\t");
        }

    for(i=0; i<40; ++i)         //印分隔線
        printf("=");

    printf("\n");               //要換行，不然下一個會接在面

    printf("Avg\t");            //該科目的平均
    for(j=1; j<5; ++j){         //從第二行開始的原因是因為我把第一行拿來當作學號
        printf("%d", array[10][j]);
        if(j == 4)
            printf("\n");
        else
            printf("\t");
    }

    printf("Max\t");            //該科目的最高分數
    for(j=1; j<5; ++j){
        printf("%d", array[11][j]);
        if(j == 4)
            printf("\n");
        else
            printf("\t");
    }

    printf("Min\t");            //該科目的最低分數
    for(j=1; j<5; ++j){
        printf("%d", array[12][j]);
        if(j == 4)
            printf("\n");
        else
            printf("\t");
    }
    return 0;
}






