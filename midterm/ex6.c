#include <stdio.h>
//      1 2 3 4
//      2 4 6 8
//      3 6 9 12
//      4 8 12 16
//
int main(){
    int i, j, c;
    scanf("%d", &c);

    for(i=1; i<=c; ++i)
        for(j=1; j<=c; ++j){
            printf("\t%d", i*j);
            if(j==c)
                printf("\n");
        }


}
