#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define MaxLineLen 1024
//回去想一下要怎麼換行結束
//想要在哪裡印換行
//不然這樣會有一個bug就是，如果這一行沒有數字，這樣會憑白無故印出一個換行
//
int main(){
    char line[MaxLineLen];
    int number, i, j, len;
    char *ptr;
    while(fgets(line, MaxLineLen, stdin)){
        len = strlen(line);
        for(i=0; i<len; i++){
            if(isdigit(line[i])){
                number = atoi(line+i);
                printf("%d ", number);
                while(isdigit(line[i]) && i<len)
                    ++i;
            }
        }
        printf("\n");
    }
    return 0;

}
