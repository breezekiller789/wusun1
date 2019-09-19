#include <stdio.h>

void truncate(float);
float sqareroot(int);

int main(){
    int n;
    float _getsqrt, _gettruncate;
    scanf("%d", &n);
    _getsqrt = sqareroot(n);
    truncate(_getsqrt);
    return 0;
}
float sqareroot(int s){
    float i=0;
    while((i*i)<=s)
        ++i;
    while((i*i-s)>0.001)
        i -= 0.001;
    return i;
}

void truncate(float a){
    int m, n;
    float x, y;
    x = a*10;               //12.23 = 122.3
    m = x;                  //m = 122
    if(x-m>=0.5)
        printf("%0.1f\n", a);
    if(x-m<0.5)
        printf("%0.1f\n", a);
}


