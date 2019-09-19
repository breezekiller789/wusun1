#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MaxLineLen 1024
#define MaxWordLen 1024


//int getword(char line[], int x, char word[]);
//int getword(char *line, int x, char *word);
char *getword(char *line, char *word){
    char *ptr, *qtr;
    ptr = line;
    qtr = word;
    while(isspace(*ptr) && *ptr!='\0')
            ptr++;
    int j=0;
    while(!isspace(*ptr) && *ptr !='\0'){
       *qtr++ = *ptr++;
    }
    *qtr = '\0';
    if(strlen(word) ==0){
        return NULL;
    }
    else
        return ptr;


}


int main(){
    char line[MaxLineLen], word[MaxWordLen], mword[128];
    int len, maxlen=0, i;
    char *ptr;
    while(fgets(line, MaxLineLen, stdin)){
        i=0;
        ptr=line;
        while(ptr == getword(ptr, word)){
            len = strlen(word);
            if(len>maxlen){
                strcpy(mword, word);
            }
        }
    }
    printf("longest word:%s\n", mword);
}

