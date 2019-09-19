#include <stdio.h>
#include <string.h>

int main(){
    char line[] = "apple is good nice is also isolate";
    char line1[] = "i";
    char *ptr;
    printf("%s\n", line);
    ptr = strtok(line, line1);
    while(ptr != NULL){
        
        printf("%s\n", ptr);
        ptr = strtok(NULL, "i");
    }
    return 0;
}
