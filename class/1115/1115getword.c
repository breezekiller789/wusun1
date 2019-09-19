#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MaxStuCnt 100
#define MaxName 64

void rmnewline(char *text){
    int len;
    len = strlen(text);
    if(text[len-1] == '\n')
        text[len-1] = '\0';

}

int main(){
    char names[MaxStuCnt][MaxName];
    int i, k;
    for(i=0; i<10; i++){
        //fgets("names[i], MaxName, stdin);   //這樣寫要小心最後面的換行符號
        //rmnewline(name[i]);
        scanf("%s", names[i]);
    }
    for(i=0; i<10; i++){
        printf("%d\t%s\n", strlen(names[i]), names[i]);
    }



}
