#include <stdio.h>
#include <string.h>

int main(){
    char line[] = "there are 3 appleshahahah";
    char *ptr = strstr(line, "apple");
        printf("%s\n", ptr);



}
