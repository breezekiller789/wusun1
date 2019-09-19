#include <stdio.h>
#include <ctype.h>

int main(){
    char word[4] = {' ', '\t', '\n', '4'};
    for(int i=0; i<4; ++i)
        printf("%d\n", isspace(word[i]));


}
