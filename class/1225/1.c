#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MaxTermNum 10000
#define MaxLine 1024
#define MaxQueryLen 256

void usage(char *program){
    fprintf(stderr, "%s     dictionayfile\n", program);
    exit(1);
}

int main(int argc, char **argv){
    char *terms[MaxTermNum], line[MaxLine], query[MaxQueryLen];
    FILE *fp;
    int tdx, i;

    if(argc == 1){
        usage(argv[0]);
    }
    fp = fopen(argv[1], "w");
    if(fp == NULL){
        fprintf(stderr, "File Open Failed: %s\n", argv[1]);
        exit(1);
    }
    tdx = 0;
    while(fgets(line, MaxLine, stdin)){
        terms[tdx] = (char *) malloc(strlen(line)+1);
        strcpy(terms[tdx], line);
        tdx++;
    }
    while(1){
        printf("intput a query:\n");
        scanf("%s", query);
        for(i=0; i<tdx; i++){
            if(strstr(terms[i], query)){
                printf("%s", terms[i]);
                break;
            }
            if(i == tdx){
                printf("no match for %s\n", query);
            }
        }
    }

}
