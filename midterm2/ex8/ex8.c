#include <stdio.h>
#include <string.h>
#define MaxLine 1024

void rmnewline(char line[2][MaxLine], int i){
    int j=0;
    while(line[i][j] != '\n')
        j++;
    line[i][j] = '\0';
}

int main(){
    char word[2][MaxLine];
    int len[2], i=0, max;
    while(fgets(word[i], MaxLine, stdin)){
        rmnewline(word, i);
        i++;
    }
    len[0] = strlen(word[0]);
    len[1] = strlen(word[1]);
//    printf("len [0] = %d\nlen [1] = %d\n", len[0], len[1]);
    if(len[0] != len[1]){
        printf("different\n");
        return 0;
    }
    for(i=0; i<len[1]; i++){
        if(word[0][i] != word[1][i])
            break;
    }
    if(i != len[1])
        printf("different\n");
    else
        printf("same\n");
/*
    for(i=0; i<2; i++)
    printf("word[%d] = %s\n", i, word[i]);
*/

}
