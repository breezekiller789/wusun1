#include <stdio.h>
#include <string.h>

int main(){
    char word[100];
    while((scanf("%s", word)) != EOF){
        if(strcmp(word, "apple") == 0){
            printf("30\n");
            continue;
        }
        if(strcmp(word, "banana") == 0){
            printf("20\n");
            continue;
        }
        if(strcmp(word, "orange") == 0){
            printf("50\n");
            continue;
        }
        else 
            printf("unknown\n");

    }
    return 0;

}
