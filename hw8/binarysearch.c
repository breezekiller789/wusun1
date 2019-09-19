#include <stdio.h>
#define MaxLine 1024
void swap(int *x, int *y){
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}
void insertionsort(int numbers[MaxLine], int num){
    int i, j, key;
    for(i=1; i<num; i++){
        key = numbers[i];
        for(j=i-1; j>=0; j--){
            if(numbers[j] >= key)
                numbers[j+1] = numbers[j];
            else
                break;
        }
        numbers[j+1] = key;
    }
}

void selectionsort(int numbers[MaxLine], int num){
    int i, j;
    for(i=0 ; i<num-1; i++)
        for(j=1; j<=num-i-1; j++)
            if(numbers[i] > numbers[i+j])
                swap(&numbers[i], &numbers[i+j]);
/*
    for(i=0; i<num; i++)
        printf("%d\n", numbers[i]);
*/
}

//
int main(){
    int i, j, num, numbers[MaxLine];
    int key;
    for(i=0; scanf("%d", &numbers[i])!=EOF; i++);
    num = i;
    insertionsort(numbers, num);
//    printf("num = %d\n%d\n", num, numbers[num-1]);
    for(i=0; i<num; i++)
        printf("%d\n", numbers[i]);


}
