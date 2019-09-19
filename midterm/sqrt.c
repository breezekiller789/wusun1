#include <stdio.h>

float mysqrt(int inputnum){
    float i=0;
    float a = 0.01;//accuracy
    while(i*i<=inputnum)
        ++i;
    while((i*i-inputnum) >= 0.01)
        i-=a;
    printf("%0.2f\n", i);
    return i;

}

float accurate(float inputnum){
    float i=inputnum;
    int ipart = i*10;  //整數部分，如果i=2.46, ipart=24, dotpart=0.6
    float dotpart = (i*10)-ipart;    //小數點部份
    printf("inputnum=%0.2f\n", inputnum);
    printf("integer part=%d\n", ipart);
    printf("dotpart=%0.2f\n", dotpart);
    if(dotpart==0.5){
        printf("dotpart>=0.5:%0.2f\n", i+0.1);
        return i+0.1;
    }
    else{
        printf("dotpart<0.5:%0.2f\n", i);
        return i;
    }

}

int main(){
    float inputnum, aftersqrt;
    float result;
    
    while(scanf("%f", &inputnum)!=EOF){
        aftersqrt = mysqrt(inputnum);
        result = accurate(aftersqrt);
        printf("%0.1f\n", result);
    }
    return 0;


}
