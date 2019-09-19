#include <stdio.h>

//印出以下圖形
//          *
//         **
//        ***      
//       ****

int main(){
    int i, j, k, m;
    scanf("%d", &k);

    for(i=1; i<=k; ++i){            //一行一行作
        for(j=0; j<k-i; ++j)        //把圖用手畫一次就會知道第一行要印的空格數
            printf(" ");            //就是輸入的值扣掉行數
        for(m=0; m<i; ++m)          //第幾行就要印幾個*
            printf("*");
        printf("\n");
    }

}
