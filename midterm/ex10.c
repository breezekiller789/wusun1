#include <stdio.h>


int main(){
    int c, i, a;
    float m;
    scanf("%d", &c);
    m = c/2.54/12;
    i = m;
    a = (m-i)*10+1;
    printf("%d feet %d inches\n", i, a);


}
