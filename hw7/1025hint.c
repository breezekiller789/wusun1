#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MaxLineLen 1024
//要講得是說，要處理字元跟整數是不能共同處理的
//一定會出問題
//注意，萬一輸入沒有數字的情況，會有bug，因為這樣指標會停不下來
//他就會繼續一直往下走，直到遇到一個整數為止
//atoi
int  main(){
    char line[MaxLineLen];
    int number;
    char *ptr;
    while(fgets(line, MaxLineLen, stdin)){
        ptr = line;
        while(*ptr > '9' || *ptr < '0')
            ptr++;
//        printf("ptr:%d\n", *ptr);
//        printf("ptr position:%d\n", (int) (ptr-line));
        number = atoi(ptr);
        printf("%d\n", number);

    }
    return 0;
}
