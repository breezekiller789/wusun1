#include <stdio.h>


int main(){
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    printf("x+y=%d\n", x+y);
    printf("x-y=%d\n", x-y);
    printf("x*y=%d\n", x*y);
    if(y == 0)
        printf("error\n");
    else
        printf("x/y=%d\n", x/y);


}
