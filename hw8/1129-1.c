#include <stdio.h>
#include <string.h>
#define MaxLine 1024
//compile: ulimit

char *pat[] = {"Apple", "Google", "Microsoft", "Amazon", "Facebook", };
int patCnt = 5;
int cnt[100];
//字串搜尋
int main(){
    char line[MaxLine];
    char *ptr;
    int i;
    for(i=0; i<patCnt; i++){
        cnt[i] = 0;
    }
    while(fgets(line, MaxLine, stdin)){
//        ptr = line;
        for(i=0; i<patCnt; i++){
            ptr = line;
//            printf("ptr:%s\n", ptr);
//            while((ptr = strstr(ptr, pat[i]))){
            while((ptr = strcasestr(ptr, pat[i]))){
                cnt[i]++;
                *ptr += strlen(pat[i]);
            }
        }
        printf("count for %s:%d\n", pat[i], cnt[i]);
    }
}
