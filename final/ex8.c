#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MaxLine 1024

int mystrcmp(char *x, char *y){
    int i=0, len;
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

int main(){
    char line1[MaxLine], line2[MaxLine];
    int retvalue;
    fgets(line1, MaxLine, stdin);
    fgets(line2, MaxLine, stdin);
    retvalue = mystrcmp(line1, line2);
//    printf("return value: %d\n", retvalue);
    if(retvalue == 0)
        printf("same\n");
    else
        printf("differnt\n");

}
