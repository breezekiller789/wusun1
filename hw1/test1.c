#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>
#define MaxLine 1024

int main(int argc, char *argv[]){

    char *line;
    line = (char *)malloc(sizeof(char) * MaxLine);
    fgets(line, MaxLine, stdin);

    if(strcmp("apple", line) == 0){
        printf("蘋果\n");
    }

    return 0;
}
