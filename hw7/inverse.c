#include <stdio.h>
#include <string.h>
#define MAXLINE 1024
//字串反轉
int rmnewline(char line[]){
    int len;
    len = strlen(line);
    if(line[len-1] == '\n'){
        line[len-1] = '\0';
        return len-1;
    }
    else
        return len;         //代表沒有換行符號
}
void swap(char line[], int i, int j){
    char tmp;
    tmp = line[i];
    line[i] = line[j];
    line[j] = tmp;
}
int main(){
    char line[MAXLINE];
    int len;
    while(fgets(line, MAXLINE, stdin)){
        len = rmnewline(line);
        for(int i=0; i<len/2; ++i)          //把頭跟尾互換，一直網內互換
            swap(line, i, len-1-i);
        printf("%s\n", line);
    }
    return 0;
}
