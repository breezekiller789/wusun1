#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MaxLineLen 1024

//int getnum(char *line, 

int main(){
    int i, j, getnumber[MaxLineLen], len, max, nnumber=0;
    char line[MaxLineLen];
    while(fgets(line, MaxLineLen, stdin)){
        len = strlen(line);
        for(i=0; i<len; ++i){
            if(line[i]>='0' && line[i]<='9'){
                getnumber[nnumber] = atoi(&line[i]);
                ++nnumber;
            }
            while(line[i+j]>='0' && line[i+j]<='9'){
                ++j;
                ++i;
            }
        }
    }
    max = getnumber[0];
    for(i=0; i<nnumber; ++i){
        if(getnumber[i] > max)
            max = getnumber[i];
    }
}
