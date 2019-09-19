#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[10];
    for(int i=0; i<10; ++i){
        a[i] = rand()%10;
        printf("a[%d]=%d\n", i, a[i]);
    }
    return 0;
}
