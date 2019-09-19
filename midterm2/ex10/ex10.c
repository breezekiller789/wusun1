#include <stdio.h>
#include <stdlib.h>
#define MaxLine 1024

void swap(int *x, int *y){
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

void bubblesort(int numbers[10], int i){
    int x, y;
    for(x=0; x<i-1; x++)
        for(y=0; y<i-x-1; y++)
            if(numbers[y] > numbers[y+1])
                swap(&numbers[y], &numbers[y+1]);

}

int main(){
    char line[MaxLine];
    int i=0, numbers[10];
    while(fgets(line, MaxLine, stdin)){
        numbers[i] = atoi(line);
//        printf("%d\n", numbers[i]);
        i++;
    }
    bubblesort(numbers, i);
    for(int j=0; j<i; j++)
        printf("%d\n", numbers[j]);

}
