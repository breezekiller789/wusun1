#include <stdio.h>
//fibonacci number
//f1 =
int p;

//explain funtionality
//input parameters
//return value;
//global variables used or modified if any
int maxoftwo(int x, int y){
    if(p>100)
        p = p-1;
    if(x>y)
        return x;
    else
        return y;
}

//0 1 1 2 3 5 8 13 21....
int fibonacci(int n){
    if(n<0)
        return -1;
    int v1=0;
    int v2=1;
    int result;
    v1 = 0;
    v2 = 1;
    for(int i=2; i<=n; ++i){
        result = v2 + v1;       //前兩項相加
        v1 = v2;                //相加完之後v1就不用了，把v2變成後來的v1，
        v2 = result;            //result變成後來的v2
    }
    return result;
}

int fibo(int n){
    if(n<0)
        return -1;
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    else 
        return (fibo(n-1) + fibo(n-2));
}

//n! = n*(n-1);
int factorial(int n){
    if(n<0)
        return -1;
    if(n==1)
        return 1;
    else
        return n*factorial(n-1);

}

int main(){
    int n;
    while(1){
        printf("input n:");
        scanf("%d", &n);
        printf("f(n) = !%d = %d\n", n, factorial(n));
        printf("f(%d) = fibonacci = %d\n", n, fibonacci(n));
        printf("f(%d) = fiborecursive = %d\n", n, fibo(n));
    }
    return 0;
}
