#include <stdio.h>
long multiple(long x, long y){
    if((x>=0 && y>=0) || (x<=0 && y<=0))
        return x*y;
    else
        return 0;
}
int main(){
    long j;
    long x, y;
    scanf("%ld", &x);
    scanf("%ld", &y);
    j = multiple(x, y);
    printf("%ld\n", j);
    return 0;
}
