#include <stdio.h>

//輸入兩個值X,Y然後找這兩個的最大公因數
//方法就是多宣告一個變數N然後把輸入的兩個值當中比較小的那個asign給N然後code如下
//if(x>y)   N = y;
//while(x % N != 0 || y % N != 0)
//  --N;
//當迴圈停下來的時候N就是最大公因數了
//反之，找最小公倍數就是反過來，把最大的asign給N
//if(x>y)   N = x;
//while(N % x != 0 || N % y != 0)
//  ++N;

int main(){
    int x, y;
    int N=0;
    printf("輸入x:\n");
    scanf("%d", &x);
    printf("輸入y:\n");
    scanf("%d", &y);
    if(x>y)
        N = y;
    else
        N = x;
    while(x % N != 0 || y % N != 0){
        --N;
    }
    printf("%d\n", N);

}
