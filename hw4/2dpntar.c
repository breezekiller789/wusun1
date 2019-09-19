#include <stdio.h>
//檢查看看指標在二元陣列當中+1會往下一行指還是往下一列指
int main(){
    int array[5][5];
    int *ptr;
    int i, j, value = 0;
    ptr = &array[0][0];

    for(i=0; i<5; ++i)          //把每個陣列都放進一個值
        for(j=0; j<5; ++j)
            array[i][j] = value++;

    for(i=0; i<5; ++i)          //把陣列一個一個印出來
        for(j=0; j<5; ++j){
            printf("%d", array[i][j]);
            if(j == 4)
                printf("\n");
            else
                printf("\t");
            
            }

    printf("%d\n", *ptr+20);

}
