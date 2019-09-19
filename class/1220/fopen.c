#include <stdio.h>

int main(int argc, char **argv){
    FILE *fp;
    printf("argv[1]: %s\n", argv[1]);
    fp = fopen(argv[1], "w");
    return 0;
}
