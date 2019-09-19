#include <stdio.h>
#include <string.h>
#define MaxLen 1024
int rmnewline(char word[]){
    int len;
    len = strlen(word);
    if(word[len-1]=='\n'){
        word[len-1] = '\0';
        return len-1;
    }
    else
        return len;
}
int main(){
    int i;
    char word[MaxLen];
    int len;
    char tmp;
    while(fgets(word, MaxLen, stdin)){
        len = rmnewline(word);
        for(i=0; i<len/2; ++i){
              tmp = word[i];
              word[i] = word[len-1-i];
              word[len-1-i] = tmp;
        }
        printf("%s\n", word);
    }
    return 0;
}
