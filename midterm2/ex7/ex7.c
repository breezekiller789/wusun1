#include <stdio.h>
#include <string.h>
#define MaxLine 1024

int rmnewline(char line[MaxLine]){
    int i;
    while(line[i] != '\n')
        i++;
    line[i] = '\0';
    return i;
}

int main(){
    int i, j, Cnt;
    char Word[1000][MaxLine], *ptr;
    while(scanf("%s", Word[Cnt])!=EOF){
        Cnt++;
    }
    for(i=0; i<Cnt; i++){
        ptr = Word[i];
        for(j=0; j<Cnt; j++){
            if(strcmp(Word[j], ptr) == 0)
                ++numbers

        }
    }



/*
    for(j=0; j<i; j++)
        printf("%s\n", Word[j]);
*/

}
