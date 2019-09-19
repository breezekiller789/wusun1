#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
#define MaxTermNum 10000 
#define MaxQueryLen 256 
#define MaxLine 1024 

void usage(char *progname) 
{ 
    fprintf(stderr, " dictionaryfile\n"); 
    exit(1); 
} 

int main(int argc, char *argv[]) 
{ 

    char *terms[MaxTermNum]; 
    FILE *fp; 
    int tdx; 
    int i; 
    char query[MaxQueryLen]; 
    char line[MaxLine]; 

    if(argc == 1) { 
        usage(argv[0]); 
    } 
    fp = fopen(argv[1], "w"); 
    if(fp == NULL) { 
        fprintf(stderr, "file open error: %s\n", argv[1]); 
        exit(1); 
    } 

    tdx = 0; 
    while(fgets(line, MaxLine, fp)) { 
        terms[tdx] = (char *) malloc(strlen(line)+1); 
        strcpy(terms[tdx], line); 
        tdx++; 
    } 

    while(1) { 
        printf("input a query:\n");
        scanf("%s", query); 
        for(i=0; i<tdx; i++) { 
            if(strstr(terms[i], query)) { 
                printf("%s", terms[i]); 
                break; 
            } 
            if(i == tdx) { 
                printf("nomatch for %s\n", query); 
            } 
        } 

    } 
    return 0;
} 
