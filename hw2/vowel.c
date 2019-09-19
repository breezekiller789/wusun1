#include <stdio.h>
#include <ctype.h>
int main(){
    float nv = 0;//count of vowel
    float nc = 0;//count of character
    float ns = 0;//count of space
    float nd = 0;//count of digit
    int i, c;//for loop control
    int nvowel[5];
    int max;//for finding the most common vowel
    char vowel[] = {'a', 'e', 'i', 'o', 'u'};
    
    for(i=0; i<10; ++i)
        nvowel[i] = 0;

    while((c=getchar()) != EOF){
        if(c == 'a' || c == 'A')    ++nvowel[0];    /*處理母音，包含大寫*/
        if(c == 'e' || c == 'E')    ++nvowel[1];
        if(c == 'i' || c == 'I')    ++nvowel[2];
        if(c == 'o' || c == 'O')    ++nvowel[3];
        if(c == 'u' || c == 'U')    ++nvowel[4];
        if(isdigit(c))              ++nd;                   //處理數字 
        if(c == ' ')                ++ns;                    //處理空格
        ++nc; 
    }
    for(i=0; i<5; ++i)
        printf("%c:%0.6f\n", vowel[i], (float)nvowel[i]/nc);
   
    printf("digit:%0.6f\n", (float)nd/nc);
    printf("space:%0.6f\n", (float)ns/nc);
    
    max = nvowel[0];                        //找出最常出現的母音
    for(i=0; i<5; ++i){
        if(max > nvowel[i]){
            max = nvowel[i];
        }
    }
    printf("max = %d", max);
    for(i=0; i<5; ++i)
        if(max == nvowel[i])
            printf("the most common vowel:%c", vowel[i]);
    
    printf("space : %f", ns);

    return 0;
    
}
