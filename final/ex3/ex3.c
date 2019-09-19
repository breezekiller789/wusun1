#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define MaxLine 1024

int main(){
        int len, i, targetcnt;
        char line[MaxLine], target[MaxLine];
        while(fgets(line, MaxLine, stdin)){
                len = strlen(line);
                targetcnt = 0;
                for(i=0; i<MaxLine; i++){
                        if(!isspace(line[i])){
                                target[targetcnt] = line[i];
                                targetcnt++;
                        }
                        else 
                            break;
                }
                target[targetcnt] = '\0';
                printf("target = %s\n", target);
                if(strstr(&line[i], target))
                    printf("%s", line);


        }
        
        
        
        
}
