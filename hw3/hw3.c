#include <stdio.h>
#include <ctype.h>
int main(){
    int c, i;
    int ndigit, nc, nodd, nvowel, nl;
    char vowel[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    ndigit = nc = nodd = nvowel = 0;
    nl = 0;                 //開始打就算第一行了，所以從一開始
    while((c=getchar()) != EOF){
        for(i=0; i<10; i++){
            if(c == vowel[i])
                nvowel++;
        }
        if(c == '\n')
            ++nl;
        if(c>='0' && c<='9'){
            ndigit++;
            if((c-'0') % 2 == 1)
                nodd++;
        
        }
        ++nc;
    }
    printf("number of lines: %d\n", nl);
    printf("number of vowels: %d\n", nvowel);
    printf("number of digits: %d\n", ndigit);
    printf("number of odds: %d\n", nodd);
    printf("number of characters: %d\n", nc);
}
