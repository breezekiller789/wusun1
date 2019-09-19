#include <stdio.h>
#include <string.h>
int main(){
    char word[100];
    while((scanf("%s", word))!= EOF){
        if(strcmp(word, "0") == 0)
                break;
        if(strcmp(word, "apple") == 0)
            printf("蘋果\n");
        else if(strcmp(word, "banana") == 0)
            printf("香蕉\n");
        else if(strcmp(word, "orange") == 0)
            printf("柳丁\n");
        else if(strcmp(word, "candy") == 0)
            printf("糖果\n");
        else if(strcmp(word, "avocado") == 0)
            printf("酪梨\n");
        else if(strcmp(word, "coconut") == 0)
            printf("椰子\n");
        else if(strcmp(word, "grape") == 0)
            printf("葡萄\n");
        else if(strcmp(word, "lemon") == 0)
            printf("檸檬\n");
        else 
            printf("李公蝦毀!?\n");
        
    }
    return 0;
}
