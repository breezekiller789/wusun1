#include <stdio.h>
#include <string.h>
#define MaxLine 1024

char *NumStr[] = {"zero", "one", "two", "three", "four", "five"};
//字串搜尋
int main(){
    char pat[] = "apple";
    char line[MaxLine];
    char *ptr;
    int cnt = 0;
    while(fgets(line, MaxLine, stdin)){
        ptr = line;
//        while(ptr = strstr(ptr, pat)){    //Q:這一行改成這樣Compiler會有warning，為什麼？
        while((ptr = strstr(ptr, pat))){
            cnt++;
            *ptr += strlen(pat);
        }
    }
//注意文法，萬一有多個apple，後面就要加s
//用Cnt來控制要不要加s
//如果今天不要印Cnt，改印成，如果今天
//有一個就印One，有兩個就印Two.....
    if(cnt == 1){
        printf("there is %s %d %s\n", NumStr[cnt], cnt, pat);
    }
    else{
        printf("there are %s %d %ss\n", NumStr[cnt], cnt, pat);
    }
        

}
