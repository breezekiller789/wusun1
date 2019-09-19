#include <stdio.h>
#include <stdlib.h>
#define Nums 100
// 5 2 4 8 9 7 1 3 6
//
void swap(int *x, int *y){
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

int main(){
    int number[Nums];
    int i, j, tmp;
    for(i=0; i<Nums; ++i){
        number[i] = rand();
        printf("%d\n", number[i]);
    }
    for(i=0; i<Nums-1; ++i)
        for(j=1; j<=Nums-1-i; ++j)
            if(number[i] >= number[i+j]){
                swap(&number[i], &number[i+j]);
            }
    printf("Sorted\n");
    for(i=0; i<Nums; ++i){
        printf("%d\n", number[i]);
    }
    

}
