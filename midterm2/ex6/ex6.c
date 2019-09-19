#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MaxLine 1024

char *dictionary[] = {"apple", "蘋果", "banana", "香蕉", "cat", "貓咪", "dog", "小狗", "elephant", "大象"};
int WordCnt=10;

int rmnewline(char line[MaxLine]){
    int i=0;
    while(line[i] != '\n')
        i++;
    line[i] = '\0';
    return i;

}

int main(){
    int i, len, HasWord=0;
    char line[MaxLine], *ptr;
    while(fgets(line, MaxLine, stdin)){
        len = rmnewline(line);
        HasWord = 0;
        for(i=0; i<WordCnt; i++){
            ptr = line;
            while((ptr = strstr(ptr, dictionary[i]))){
                for(int j=0; j<strlen(ptr); j++){
                    
                }
                if(strcmp(ptr, dictionary[i]) == 0){
                    HasWord = 1;
                    printf("%s\n", dictionary[i+1]);
                    *ptr += strlen(dictionary[i]);
                }
                else
                    break;
            }
        }
        if(HasWord == 0)
            printf("undefined\n");

    }


}
