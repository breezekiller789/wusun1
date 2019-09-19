#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void usage(char *progname){
    printf("%s string1 string2\n", progname);
    exit(1);
}

int mystrcmp(char *x, char *y){
    int len, i;
    len = strlen(x);
    for(i=0; i<len; i++){
        if(x[i] != y[i])
            return x[i]-y[i];

    }
    if(y[len] ==0)
        return 0;
    else
        return x[i]-y[i];
}

int main(int argc, char **argv){
    char *leftStr, *rightStr;
    int k, p;

    if(argc == 1)
        usage(argv[0]);
    leftStr = argv[1];
    rightStr = argv[2];
    k = mystrcmp(leftStr, rightStr);
    p = strcmp(leftStr, rightStr);
    printf("mystrcmp() result: %d\n", k);
    printf("strcmp() result: %d\n", p);
        

}
