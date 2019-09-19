#include <stdio.h>

int main(){
    char name[10][10];
    int i, j;
    for(i=0; i<10; ++i)
        scanf("%s", name[i]);

    for(i=0; i<10; ++i)
        printf("%s\n", name[i]);
/*    for(i=0; i<10; ++i)
        for(j=0; j<10; ++j){
            printf("%c", name[i][j]);
            if(name[i][j+1] == ' '){
                printf("\n");
                break;
            }
        }
*/
}
