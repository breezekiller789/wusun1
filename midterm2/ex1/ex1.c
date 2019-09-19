#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MaxLine 1024
#define IN 1
#define OUT 0
//為什麼換一行不會換行？寫這樣不是應該要印嗎

void getword(char line[MaxLine]){
    int i, idx;
    char Word[MaxLine];
    for(i=0; i<strlen(line)-1; i++){
        if(!isspace(line[i])){
            for(idx=0; !isspace(line[i]); idx++){
                Word[idx] = line[i];
                i++;
            }
            Word[idx] = '\0';
            printf("%s\n", Word);
            i--;
        }
    }
}

int main(){
    int i, len, State;
    char line[MaxLine], Word[MaxLine];
    while(fgets(line, MaxLine, stdin)){
        getword(line);
    }
    return 0;


}
