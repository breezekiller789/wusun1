#include <stdio.h>
#include <string.h>
#define MaxLine 1024

int mystrcmp(char *x, char *y){
    int len, i=0;
    len = strlen(x);
    while(x[i] == y[i] && i<len){
        i++;
    }
    if(x[len] == '\0')
        return x[i]-y[i];
    if(i==len-1)
        return 0;
    else
        return x[i]-y[i];

}

int main(int argc, char **argv){
    char *leftptr, *rightptr;
    int num;
    leftptr = argv[1];
    rightptr = argv[2];
    num = mystrcmp(leftptr, rightptr);
    printf("mystrcmp: %d\n", num);
    printf("strcmp: %d\n", strcmp(leftptr, rightptr));
}
