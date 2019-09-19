#include <stdio.h>
#include <ctype.h>

int main(){
    int nletter, ndigit, nl, c;
    nletter = ndigit = nl = 0;

    while((c=getchar()) !=EOF){
        if(c>='0' && c<='9')
            ++ndigit;
        if(c>='a' && c<='z')
            ++nletter;
        if(c>='A' && c<='Z')
            ++nletter;
        if(c == '\n')
            ++nl;

    }
    printf("number of digits:%d\n", ndigit);
    printf("number of letters:%d\n", nletter);
    printf("number of lines:%d\n", nl);

}
