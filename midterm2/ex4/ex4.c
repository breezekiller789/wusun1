#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define MaxLine 1024
#define MaxNum 100


int add(char line[MaxLine], int i, int len){
    int numbers[MaxNum], j, num=0, sum=0;
    for(j=i; j<len; j++){
        if(isdigit(line[j])==1){
            numbers[num] = atoi(&line[j]);
            num++;
        }
    }
    for(j=0; j<num; j++)
        sum+=numbers[j];
    printf("result = %d\n", sum);

}

int substract(char line[MaxLine], int i, int len){
    int numbers[MaxNum], j, num=0, sum=0;
    for(j=i; j<len; j++){
        if(isdigit(line[j])==1){
            numbers[num] = atoi(&line[j]);
            num++;
        }
    }
    for(j=0; j<num; j++)
        sum-=numbers[j];
    printf("result = %d\n", sum);
}

int multiple(char line[MaxLine], int i, int len){
    int numbers[MaxNum], j, num=0, sum=0;
    for(j=i; j<len; j++){
        if(isdigit(line[j])==1){
            numbers[num] = atoi(&line[j]);
            num++;
        }
    }
    for(j=0; j<num; j++)
        sum*=numbers[j];
    printf("result = %d\n", sum);

}

int divide(char line[MaxLine], int i, int len){
    int numbers[MaxNum], j, num=0, sum=0;
    for(j=i; j<len; j++){
        if(isdigit(line[j])==1){
            numbers[num] = atoi(&line[j]);
            num++;
        }
    }
    for(j=0; j<num; j++)
        sum/=numbers[j];
    printf("result = %d\n", sum);

}

void determinate(char line[MaxLine], int i, int len){
    if(line[i]=='+')
        add(&line[i], i, len);
    if(line[i]=='-')
        substract(&line[i], i, len);
    if(line[i]=='*')
        multiple(&line[i], i, len);
    if(line[i]=='/')
        divide(&line[i], i, len);
}

int rmnewline(char line[MaxLine]){
    int i=0;
    while(line[i] != '\n')
        ++i;
    line[i] = '\0';
    return i;
}



int main(){
    int i, len;
    char line[MaxLine];
    while(fgets(line, MaxLine, stdin)){
        len = rmnewline(line);
        for(i=0; i<len; i++){
            if(line[i]=='+' || line[i]=='-' || line[i]=='*' || line[i]=='/')
                determinate(&line[i], i, len);

        }


    }

}
