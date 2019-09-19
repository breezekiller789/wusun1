//  finding the longest word
//  this is an interesting example


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MaxLineLen 1024
#define MaxWordLen 128

//int getword(char line[], int i, char word[])          //這樣也可以
int getword(char *line, int x, char *word){
    int i=x, j;
    if(strlen(word) == 0){
        return -1;
    }
    else
        return 0;
    while(isspace(line[i])){            //isspace這個函式收到空格、跳空、換行都會回傳1
        i++;
    }
    j=0;
    while(!isspace(line[i]) && line[i]!='\0'){      //最後面那個的意義就是，要讓迴圈能停下來
        word[j] = line[i];
        j++;
        i++;
    }
    word[j] = '\0';         //因為當line[i]收到一個跳空，空格，換行就會停下來，所以word必須要幫他補上空字元'\0'
    return i;               //回傳停在哪一個位置，等一下才可以繼續往下找

}
int mystrlen(char text[]){
    int i=0;
    while(text[i] != '\0'){
        i++;
    }
    return i;
}

int main(){
    char line[MaxLineLen], word[MaxWordLen], maxword[MaxWordLen];
    int len, maxlen=0, i;
    while(fgets(line, MaxLineLen, stdin)){
        i=0;
        while(i >= 0){
            i = getword(line, i, word);
            len = mystrlen(word);
            if(len >maxlen){
                strcpy(maxword, word);
                maxlen = len;
            }
        }
    }
    printf("longest word%s\n", maxword);
    return 0;
}
