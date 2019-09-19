#include <stdio.h>
#include <ctype.h>

int main(){
    int c;
    int num;
    char x;
    scanf("%c", &x);
    c = isdigit(x);
    printf("%d\n", c);

}
