//a simple dictionary, with the data declared by an array

#include <stdio.h>
#include <string.h>
#define MaxLine 1024

char *dictionary[] = {"apple", "蘋果", "banana", "香蕉"};
int WordCnt=4;

int rmnewline(char line[MaxLine]){
    int i;
    while(line[i]!='\n'){
        ++i;
    }
    line[i] = '\0';
//    printf("in rmnewline, i=%d\n", i);
    return i;

}

int main(){
    char line[MaxLine];
    int len, i;

    for(i=0; i<WordCnt; i++)
        printf("dictionary[%d]:%s\n", i, dictionary[i]);

    while(fgets(line, MaxLine, stdin)){
        len = rmnewline(line);
        for(i=0; i<WordCnt; i++){
            if(strcmp(line, dictionary[i]) == 0){
                printf("%s\n", dictionary[i+1]);
                break;
            }
        }
        if(i==WordCnt)
        printf("unknown\n");
    }
    return 0;

}
