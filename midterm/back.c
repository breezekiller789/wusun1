#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MaxLineLen 1024

int mytolower(char *line){
    int len, i;
    
    for(i=0; i<MaxLineLen && line[i] != '\0'; ++i){
        line[i] = tolower(line[i]);       
    }
    return i-1;
}

int determinate(char *line, int len){
    int i, tmp;
    for(i=0; i<len/2; ++i){
        if(line[i] != line[len-1-i]){
            return 0;
        }
    }
    return 1;
}

int main(){
    int i, len, determvalue;
    char line[MaxLineLen];

    while(fgets(line, MaxLineLen, stdin)){
        len = mytolower(line);
        determvalue = determinate(line, len);
        if(determvalue == 0)
            printf("no\n");
        else if(determvalue == 1)
            printf("yes\n");
    }
    return 0;

}
