#include <stdio.h>
#include <ctype.h>

int main(){

    char c[] = "ABcHD";
    for(int i=0; i<5; i++){
        printf("%c\n", tolower(c[i]));
    }
    
}
