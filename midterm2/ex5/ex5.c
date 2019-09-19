#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MaxLine 1024
//字串反轉

void swap(char *x, char *y){
    char tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

void rmnewline(char line[MaxLine]){
    int i=0;
    while(line[i]!='\n')
        ++i;
    line[i] = '\0';
//    return i;
}

int main(){
    int i, len;
    char line[MaxLine], copy[MaxLine];
    while(fgets(line, MaxLine, stdin)){
//        rmnewline(copy);
        rmnewline(line);
        len = strlen(line);
//        printf("len = %d\n", len);
        for(i=0; i<len; i++){
            copy[i] = line[i];
        }
        for(i=0; i<len/2; i++){
            swap(&copy[i], &copy[len-1-i]);
        }
        copy[len] = '\0';
//        printf("copy=%s\n", copy);
//        printf("line=%s\n", line);
        if(strcmp(line, copy) == 0){
            printf("%s\n", line);
        }
    }


}
