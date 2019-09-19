#include <stdio.h>
void bubble(int [10][2]);
int main(){
    int array[10][2], i, j;
    for(i=0; i<10;++i)
        for(j=0; j<2; ++j)
            scanf("%d", &array[i][j]);
    
    bubble(array);
    for(i=0; i<10; ++i)
        for(j=0; j<2; ++j){
            printf("%d ", array[i][j]);
            if(j==1)
                printf("\n");
        }
    return 0;
}

void bubble(int array[10][2]){
    int i, j, tmp;
    for(i=0; i<10-1; ++i)
        for(j=0; j<10-1; ++j)
            if(array[j][0]<array[j+1][0]){
                tmp = array[j][0];    
                array[j][0] = array[j+1][0];
                array[j+1][0] = tmp;
            }
    for(i=0; i<10-1; ++i)
        for(j=0; j<10-1; ++j)
            if(array[j][1]<array[j+1][1]){
                tmp = array[j][1];    
                array[j][1] = array[j+1][1];
                array[j+1][1] = tmp;
            }
}
