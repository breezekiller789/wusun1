#include <stdio.h>
#include <string.h>

int main(){
    char line[] = "apple is good";
    char *line1;
    line1 = strdup(line);
    printf("size of line1 : %ld\n", sizeof(line1));
    printf("%s\n", line1);

}
