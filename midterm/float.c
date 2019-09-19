#include <stdio.h>

int main(){
    float c ;
    scanf("%f", &c);
    int a = c;
    float m = (c-a)*10;
    int n = m;
    if(m-n>=5)
        printf("%0.1f\n", c+0.1);
    if(m-n<5)
        printf("%0.1f\n", c);

}
