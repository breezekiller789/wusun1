#include <stdio.h>
#include <string.h>
#define MaxLine 1024
#define MaxWord 1024
//把重複過的字串做統計看他出現了幾次
//每讀一個字串就檢查跟上一個一不一樣，不一樣的話就把這個字串輸出
//問題來了，第一次的呢？第一個要跟誰比？可以先當作拿到一個空行來做比較
int main(){
    char line[MaxLine];
    char lastword[MaxWord], thisword[MaxWord];
    int cnt=0;
    lastword[0] = '\0';
    while(fgets(thisword, MaxLine, stdin)){
        if(strcmp(lastword, thisword) == 0){
            cnt++;
        }
        else{
            if(cnt == 0)                //這個針對第一個字串來處理
                continue;
            printf("%d\t%s\n", lastword);
            strcpy(lastword, thisword);
            cnt = 1;
        }

    }
    return 0;


}
