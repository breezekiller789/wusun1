#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MaxLine 1024

char *dictionary[] = {"apple", "蘋果", "banana", "香蕉", "cat", "貓咪", "dog", "小狗", "elephant", "大象"};
int pat = 10;

int rmnewline(char line[MaxLine]){
    int i=0;
    while(line[i] != '\n')
        i++;
    line[i] = '\0';
    return i;
}

int main(){
    char line[MaxLine], words[MaxLine];
    int len, i, j, k, WordLen;
    while(fgets(line, MaxLine, stdin)){
        len = strlen(line);
        for(i=0; i<len; i++){
            if(!isspace(line[i])){
                WordLen = 0;
                for(j=i; !isspace(line[j]); j++){
                    words[WordLen] = line[j];
                    WordLen++;
                    i++;
                }
                words[WordLen] = '\0';
                for(k=0; k<pat; k++){
                    if(strcmp(words, dictionary[k]) == 0){
                        printf("%s\n", dictionary[k+1]);
                        break;
                    }
                }
                if(k==pat)
                    printf("undefined\n");
//                printf("%s\n", words);
            }
        }
    }

}
