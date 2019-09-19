#include <stdio.h>

int main(){
    int i=0, c, max, min, sum=0;
    int array[150];
    while((scanf("%d", &c)) != EOF){
        array[i] = c;
        ++i;
    }

    max = array[1];
    min = array[1];
    for(i=1; i<=array[0]; ++i){
        if(array[i] > max)
            max = array[i];
        if(array[i] < min)
            min = array[i];
        sum += array[i];
    }
    printf("max value = %d\n", max);
    printf("min value = %d\n", min);
    printf("average value = %d\n", sum/array[0]);

}
