//  dictionary function,
//  dictionary embeded in the program
#include "mytype.h"

void rmnewline(char *text){
    int i=0;
    while(text[i] != '\n' && text[i] != '\0')
        i++;
    text[i] = '\0';
}

int mystrcmp(char *p, char *q){
    int i=0;
    for(i=0; p[i] != '\0'; i++){
        if(p[i] != q[i]){
            break;
        }
    }
    printf("return value:%d\n", p[i]-q[i]);
/*    if(p[i] == q[i])
        return 0;
    else 
        return p[i] - q[i];
*/
    return p[i] - q[i];
}

int main(){
    char line[MaxLineLen];

    while(fgets(line, MaxLineLen, stdin)){
        rmnewline(line);
        if(mystrcmp(line, "apple") == 0){
            printf("apple: 蘋果\n");
            continue;
        }
        if(mystrcmp(line, "banana") == 0){
            printf("banana: 香蕉\n");
            continue;
        }
        else
            continue;

    }
    return 0;

}
