#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MaxLineCnt 1000
#define MaxLineLen 1024
#define STRING 0
#define NUMERIC 1
#define ARRAYFULL -1

int swap(char *A[], int x, int y){
    char *tmp;
    tmp = A[x];
    A[x] = A[y];
    A[y] = tmp;
}

//void inputlines(char **lines){ 
int inputlines(char *lines[], int MaxLineCnt){ 
    char linebuf[MaxLineLen];
    int len, cnt=0;
    while(fgets(linebuf, MaxLineLen, stdin)){
        len = strlen(linebuf);
        lines[cnt] = (char *) malloc(len+1);
        strcpy(lines[cnt], linebuf);
        cnt++;
        if(cnt >= MaxLineCnt)
            return cnt; //or return error message
    }
    return cnt;
    free(lines);
}

void sortstrings(char *lines[], int cnt){
    int i, j;
    for(i=0; i<cnt; i++){
        for(j=0; j<cnt-1-i; j++){
            if(atoi(lines[j]) > atoi(lines[j+1])){
                swap(lines, j, j+1);
            }
        }
    }
}

void output(char *lines[], int cnt){
    int i;
    for(i=0; i<cnt; i++)
        printf("%s", lines[i]);
}

int main(int argc, char **argv){
    char *lines[MaxLineCnt];
    int lineCnt;
    int compareType = STRING;

    if(argc >1){
        if(strcmp(argv[1], "-n") == 0){
            compareType =  NUMERIC;
        }
    }

    lineCnt = inputlines(lines, MaxLineCnt);

    if(lineCnt == inputlines(lines, MaxLineCnt)){
        printf("input overflow, sort the first %d lines\n", MaxLineCnt);
        lineCnt = MaxLineCnt;
    }

    if(compareType == STRING){
        sortstrings(lines, lineCnt);
    }
    else{
        sortstrings(lines, lineCnt);
    }

    output (lines, lineCnt);

    return 0;


}
