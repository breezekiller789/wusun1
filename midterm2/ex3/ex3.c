#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MaxLine 1024

int rmnewline(char line[MaxLine]){
    int i=0;
    while(line[i] != '\n')
        ++i;
    line[i] = '\0';
    return i;

}

int main(){
    int i, len, j;
    char line[MaxLine], target[MaxLine];
    while(fgets(line, MaxLine, stdin)){
        len = rmnewline(line);
        for(i=0; i<len; i++){
            if(isdigit(line[i]) == 0){
                for(j=0; j<len && isspace(line[i]) == 0; j++){
                    target[j] = line[i];
//                    printf("%c\n", target[j]);
                    i++;
                }
                target[j] = '\0';
//                printf("j=%d\n", j);
//                printf("target=%s\n", target);
                break;
            }
        }
        if(strstr(&line[i], &target[0]))
            printf("%s\n", line);


    }



}
