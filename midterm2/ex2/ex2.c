#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define MaxLine 1024
#define MaxNum 1000000

long double truncate(long double x){
    long long intpart = x * 100;
    long double floatpart = x * 100;
    if(floatpart-intpart >= 0.5)
        return x + 0.01;
    else
        return x;
}


int main(){
    int i, len, num;
    long long numbers[MaxNum], max, sum;
    long double avg=0;
    char line[MaxLine];
    max = num = avg = 0;
    while(fgets(line, MaxLine, stdin)){
        len = strlen(line)-1;
        for(i=0; i<len; i++){
            if(isdigit(line[i]) == 1){
                numbers[num] = atoll(&line[i]);
//                printf("%lld\n", numbers[num]);
//                printf("%s\n", line);
                num++;
            }
///*
            while(isdigit(line[i]) == 1){
                ++i;
            }
//*/
        }


    }
//    printf("num = %d\n", num);
    max = numbers[0];
    avg = sum = 0;
    for(i=0; i<num; i++){
        if(numbers[i] > max)
            max = numbers[i];
        sum+=numbers[i];
    }
    avg = truncate((float)sum/num);
    printf("%lld\n", max);
    printf("%.2Lf\n", avg);
    printf("%d\n", num);
    return 0;
}
