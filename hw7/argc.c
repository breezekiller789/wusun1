#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int c[5];
    printf("argc:%d\n", argc);
    for(int i=0; i<argc; ++i){
        c[i] = atoi(argv[i]);
        printf("%d\n", c[i]+1);
    }
    return 0;


}
