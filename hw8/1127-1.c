//a simple dictionary, with the data declared by an array

#include <stdio.h>
#include <string.h>
#include "mydictionary.h"
#define MaxLine 1024
//用偶數基數來判斷是要中文翻英文還是英文翻中文

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
                if(i%2==1)
                    printf("%s\n", dictionary[i-1]);
                else
                    printf("%s\n", dictionary[i+1]);
                break;
            }
        }
        if(i==WordCnt)
        printf("unknown\n");
    }
    return 0;

}
