#include <stdio.h>
#include <string.h>
#define MaxLine 1024

int main(){
    char line[MaxLine] = "apple is good", Copystring[MaxLine];
    char *ptr, *tmp;
    line[5] = '\0';
    strcpy(Copystring, &line[6]);
    strcat(line, "haha");
    strcat(line, Copystring);
    printf("%s\n", line);

}
