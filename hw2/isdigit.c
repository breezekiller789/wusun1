#include <stdio.h>
#include <ctype.h>
int main(){
    int i, c;
    while((c=getchar()) != EOF){
        if(isdigit(c))
            printf("%c\n", c);


    }
    


}
