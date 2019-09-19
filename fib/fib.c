#include <stdio.h>

int fib(int c){
    if(c == 0)
        return 0;
    if(c == 1)
        return 1;
    else
        return fib(c-1)+fib(c-2);


}

int main(){
    int i, m;
//    printf("Enter a number of fibonacii:");
    scanf("%d", &i);
    m = fib(i);
    printf("%d\n", m);

}
