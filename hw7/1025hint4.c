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
    int HasNumber = 0;          //狀態變數，來代表說這一行有沒有數字
    while(fgets(line, MaxLineLen, stdin)){
        HasNumber = 0;                //一定要把這個重置為零，不然到後面就都跟沒有一樣
        len = strlen(line);
        for(i=0; i<len; i++){
            if(isdigit(line[i])){
                HasNumber = 1;
                number = atoi(line+i);
                printf("%d ", number);
                while(isdigit(line[i]) && i<len)
                    ++i;
            }
        }
        if(HasNumber == 1)
            printf("\n");
    }
    return 0;

}
