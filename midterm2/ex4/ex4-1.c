#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define MaxLine 1024
#define MaxNum 1000

void add(char line[MaxLine], int len){
    int i, num;
    unsigned long long numbers[MaxNum], sum;
    num = sum = 0;
    for(i=0; i<len; i++){
        if(num == 2)
            break;
        if(isdigit(line[i])==1){
            numbers[num] = atoll(&line[i]);
//            printf("number[%d] = %d\n", num, numbers[num]);
            sum += numbers[num];
            num++;
            while(isdigit(line[i])==1)
                ++i;
        }
    }
    printf("%lld\n", sum);
}

void substract(char line[MaxLine], int len){
    int i, num;
    unsigned long long numbers[MaxNum], sum;
    num = sum = 0;
    for(i=0; i<len; i++){
        if(isdigit(line[i])==1){
            numbers[num] = atoll(&line[i]);
//            printf("number[%d] = %d\n", num, numbers[num]);
            num++;
            while(isdigit(line[i])==1)
                ++i;
        }
    }
    printf("%lld\n", numbers[0]-numbers[1]);
}

void multiple(char line[MaxLine], int len){
    int i, num;
    unsigned long long numbers[MaxNum], sum;
    num = sum = 0;
    for(i=0; i<len; i++){
        if(isdigit(line[i])==1){
            numbers[num] = atoll(&line[i]);
            printf("%lld\n", numbers[num]);
//            printf("number[%d] = %d\n", num, numbers[num]);
            num++;
            while(isdigit(line[i])==1)
                ++i;
        }
    }
    printf("%lld\n", numbers[0]*numbers[1]);
}

void divide(char line[MaxLine], int len){
    int i, num;
    unsigned long long numbers[MaxNum], sum;
    num = sum = 0;
    for(i=0; i<len; i++){
        if(isdigit(line[i])==1){
            numbers[num] = atoll(&line[i]);
//            printf("number[%d] = %d\n", num, numbers[num]);
            num++;
            while(isdigit(line[i])==1)
                ++i;
        }
    }
    printf("%lld\n", (int)numbers[0]/numbers[1]);
}

int main(){
    int i, len;
    char line[MaxLine];
    while(fgets(line, MaxLine, stdin)){
        len = strlen(line)-1;
        for(i=0; i<len; i++){
            if(line[i]=='+'){
                add(&line[i], len);
            }
            if(line[i]=='-'){
                substract(&line[i], len);
            }
            if(line[i]=='*'){
                multiple(&line[i], len);
            }
            if(line[i]=='/'){
                divide(&line[i], len);
            }

        }

    }
    return 0;

}
