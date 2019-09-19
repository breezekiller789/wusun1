//a simple dictionary, with the data declared by an array
//
#include <stdio.h>
#include <string.h>
#include "mydictionary1.h"
#define MaxLine 1024
#define TRUE 1
#define FALSE 0
//用偶數基數來判斷是要中文翻英文還是英文翻中文
//++把strcmp改成strstr
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
    int len, i, match=FALSE;

    for(i=0; i<WordCnt; i++)
        printf("dictionary[%d]:%s\n", i, dictionary[i]);

    while(fgets(line, MaxLine, stdin)){
        len = rmnewline(line);
        match = FALSE;
        for(i=0; i<WordCnt; i++){
            if(strstr(dictionary[i], line)){
                match = TRUE;
                printf("%s\n", dictionary[i]);
            }
        }
        if(match==FALSE)
            printf("unknown\n");
    }
    return 0;

}
