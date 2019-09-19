#include <stdio.h>

int fib(long c){
    if(c == 0)
        return 0;
    if(c == 1)
        return 1;
    else
        return fib(c-1)+fib(c-2);


}

int main(){
    long i, m;
//    printf("Enter a number of fibonacii:");
    while(scanf("%ld", &i) != EOF){
        m = fib(i);
        printf("%ld\n", m);
    }

}
