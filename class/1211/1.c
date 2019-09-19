#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MaxLineCnt 1000
#define MaxLineLen 1024

void swap(char *A[], int x, int y){
    char *tmp;
    tmp = A[x];
    A[x] = A[y];
    A[y] = tmp;
}

int main(){
    char linebuf[MaxLineLen];
    char *lines[MaxLineCnt];
    int cnt=0, len, i, j;

    while(fgets(linebuf, MaxLineLen, stdin)){
        len = strlen(linebuf);
        lines[cnt] = (char *) malloc(len+1);
        strcpy(lines[cnt], linebuf);
        cnt++;
    }

    for(i=0; i<cnt; i++){
        for(j=0; j<cnt-1-i; j++){
            if(strcmp(lines[j], lines[j+1]) > 0){
                swap(lines, j, j+1);
            }
        }
    }

    for(i=0; i<cnt; i++)
        printf("%s", lines[i]);

}
