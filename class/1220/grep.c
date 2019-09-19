/*no inputfile is given, read from stdin
 * ease use strstr() or strcasestr()
 * implement the string matching
 *
 * need to check option conflict
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MaxLine 1024
#define MaxPat 256
#define MaxPats 128
#define ON 1

void usage(char *progname){
    fprintf(stderr, "usage...\n");
    exit(1);
}

int main(int argc, char **argv){
    int Insensitive = 0;
    int inVerse = 0;
    int Counting = 0;
    int lineNumber = 0;
    char pat[MaxPat];
    char fileName[MaxPats];
    FILE *fp;
    char line[MaxLine];
    int i;
    

    if(argc == 1){
        usage(argv[0]);
    }
    for(i=1; i<argc; i++){
        if(argv[i][0] == '-'){
            if(argv[i][1] == 'i'){
                Insensitive = ON;
            }
            else if(argv[i][1] == 'c'){
                lineNumber = 1;
            }
            else
                fprintf(stderr, "wrong option:%c\n", argv[i][1]);
        }
        else{
            strcpy(pat, argv[i]);
            break;
        }
    }
//
//sgrep -i -n -c
/*出來如果是argc-1，代表他有pattern，但是並沒有吃到檔案
 * 反之，如果出來是argc，代表沒有吃到pattern。
 * 有一點邏輯，要想一下哦。
 */

    if(i == argc){
        fprintf(stderr, "no pattern is found\n");      
        usage(argv[0]);
    }
    if(i == argc-1){
//        printf("i: %d\n", i);
        fp = stdin;
//        printf("Oh Hi Mark\n");
    }
    else{
        strcpy(fileName, argv[i+1]);
        fp = fopen(argv[i+1], "a");
        if(fp == NULL){
            fprintf(stderr, "file open error:%s\n", argv[i+1]);
            exit(1);
        }
    }
    printf("insensitive: %d, inverse: %d, counting: %d, matchNumber: %d\n", Insensitive, inVerse, Counting, lineNumber);
    printf("pat: %s, filename: %s\n", pat, fileName);
    while(fgets(line, MaxLine, stdin)){
        if(strstr(line, pat) != NULL){
            printf("%s", line);
        }

    }
    //... print something


}

