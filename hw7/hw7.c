#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
//把一個字串當中的數字字串轉成整數: good 123 haha 4321 -> 123 4321
int rmnewline(char line[100]){
    int i=0;
    while(line[i] != '\n')
        ++i;
    line[i] = '\0';
    return i;

}

float mysqrt(int number){
    float i=0;
    while(i*i<=number)
        ++i;
    while(i*i-number>=0.01)
        i-=0.01;
    return i*10;

}
void getword(char line[1024], char name[1024][1024], int *len, int numbers[100][100], int *NumRow, int *NumCol, int *NameRow, int *NameCol){
    int i;
    for(i=0; i<*len; ++i){
        if(isdigit(line[i])){
            numbers[*NumRow][*NumCol] = atoi(&line[i]);//Get Integer
            numbers[*NumRow][*NumCol] = mysqrt(numbers[*NumRow][*NumCol]);
//                printf("%d\n", numbers[NumRow][NumCol]);  //檢查分數是對的
            ++*NumCol;
            while(isdigit(line[i])){                  //往後略過，直到不是數字
                ++i;
            }
            --i;                                     //這裡要減一，不然會超過一個字元
        }
        if(!isdigit(line[i]) && isspace(line[i])==0){  //Get Word    
            for(*NameCol=0; isdigit(line[i])==0 && isspace(line[i])==0; ++*NameCol){//這個字元不能是數字且不能是跳空
                name[*NameRow][*NameCol] = line[i];
                ++i;
            }
//                printf("%s\n", name[NameRow]);        //檢查名字是對的
            --i;
            ++*NameRow;
        }
    }
    ++*NumRow;       //這行要把放成績的陣列的列加一，會走到這裡代表這一列讀完了，準備讀下一列
}
int main(){
    char line[1024], name[1024][1024];
    int numbers[100][100];
    int i, j, len, RowSum, ColSum, Max, Min;
    int NameRow, NameCol, NumRow, NumCol;
    NameRow = NameCol = NumRow = NumCol = RowSum = ColSum = 0;
    while(fgets(line, 1024, stdin)){
        len = rmnewline(line);
//        printf("len=%d\n", len);
        if(len == 0)
            continue;
        NameCol = NumCol = 0;
        getword(line, name, &len, numbers, &NumRow, &NumCol, &NameRow, &NameCol);


    }
//    printf("numcol=%d\n", NumCol);
    /*這邊把每一列的分數做平均後放到最後一行（該學生成績平均）*/
    for(i=0; i<NumRow; ++i){
        RowSum = 0;
        for(j=0; j<NumCol; ++j){
            RowSum += numbers[i][j];
        }
        numbers[i][NumCol] = RowSum/NumCol;
    }
    
    /*這邊在把下面的平均、最大、最小搞一搞放進陣列*/
    for(j=0; j<=NumCol; ++j){
        RowSum=0;
        Max = Min = numbers[0][j];      //第Ｎ行的每一列去做運算
        for(i=0; i<NumRow; ++i){
            RowSum += numbers[i][j];
            if(numbers[i][j] >= Max)
                Max = numbers[i][j];
            if(numbers[i][j] <= Min)
                Min = numbers[i][j];
        }
        numbers[NumRow][j] = RowSum/NumRow;
        numbers[NumRow+1][j] = Max;
        numbers[NumRow+2][j] = Min;

    }


    /*印東西*/
    printf("No\tMath\tEngish\tProg\tAverage\n");
    for(i=0; i<40; i++)
        printf("=");
    printf("\n");

    /*印表格*/
    for(i=0; i<NumRow; ++i){
        printf("%s\t", name[i]);        //一進來就先印名字
        for(j=0; j<=NumCol; ++j){       //把分數印一印，中間有等於的關係是因為NumCol意思是我程式輸入了幾個成績（不單單三個）
            printf("%d", numbers[i][j]);
            if(j==NumCol)
                printf("\n");
            else
                printf("\t");

        }
    }
    for(i=0; i<40; i++)
        printf("=");
    printf("\n");

    for(i=NumRow; i<=NumRow+2; ++i){
        if(i==NumRow)
            printf("AVG\t");
        else if(i==NumRow+1)
            printf("Max\t");
        else if(i==NumRow+2)
            printf("Min\t");

        for(j=0; j<=NumCol; ++j){
            printf("%d", numbers[i][j]);
            if(j==NumCol)
                printf("\n");
            else
                printf("\t");
        }
    }





    return 0;
}
