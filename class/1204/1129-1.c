#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MaxLine 1024
//compile: ulimit
//gcc -c 不產生執行檔
//grep -l ....
//char *strcasestr(char *, char *);
char *names[100];
char name[100];
char *p;
char *pat[] = {"Apple", "Google", "Microsoft", "Amazon", "Facebook", };
int patCnt = 5;
int cnt[100];
//字串搜尋
int main(){
    char line[MaxLine];
    char *ptr;
    int i;
    p = name;
    strcpy(p, "apple");
    printf("name:%s\n", name);
    printf("p=%s\n", p);

    p = (char *) malloc(100);
    
    for(i=0; i<patCnt; i++){
        printf("pat[%d]:%s\n", i, pat[i]);
    }
    for(i=0; i<patCnt; i++){
        cnt[i] = 0;
    }
    while(fgets(line, MaxLine, stdin)){
//        ptr = line;
        for(i=0; i<patCnt; i++){
            ptr = line;
//            printf("ptr:%s\n", ptr);
            while((ptr = strstr(ptr, pat[i]))){ //strstr會分大小寫
//            while((ptr = strcasestr(ptr, pat[i]))){   //這會分大小寫
                cnt[i]++;
                *ptr += strlen(pat[i]);
            }
        }
    }
    for(i=0; i<patCnt; i++){
    printf("%d\t%s\n", cnt[i], pat[i]);
    }
}
