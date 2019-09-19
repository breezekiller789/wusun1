#include <stdio.h>
#include <string.h>

void rmnewline(char line[], int len){
    if(line[len-1] == '\n')
        line[len-1] = '\0';
}
int main(){
    int i, j, k;
    int len, maxlen = 0;
    char line[1024], maxline[1024];
    while(fgets(line, 1024, stdin)){
        len = strlen(line);
        if(len > maxlen){
            maxlen = len;
            strcpy(maxline, line);
        }
        rmnewline(maxline, len);
    }
    printf("maxlen:%d\n", maxlen);
    printf("%s\n", maxline);
    return 0;

}
