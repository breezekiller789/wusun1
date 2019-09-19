#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MaxLineLen 1024
//現在問題是要解決程式只能印最前面的整數，後面的沒辦法印
//想法就是，我做一個函式，這個函式來取整數的，整數取完，把下一個位置的指標傳回
//給主程式繼續找下一個整數
//atoi
int  main(){
    char line[MaxLineLen];
    int number;
    char *ptr;
    while(fgets(line, MaxLineLen, stdin)){
        ptr = line;
        while((*ptr > '9' || *ptr < '0') && *ptr!='\0')
            ptr++;
//        printf("ptr:%d\n", *ptr);
//        printf("ptr position:%d\n", (int) (ptr-line));
        while((ptr = getnumber(ptr, number)) != NULL){
            printf("%d\n", number);
        }
        
        if(*ptr!='\0'){
            number = atoi(ptr);
            printf("%d\n", number);
        }
    }
    return 0;
}
