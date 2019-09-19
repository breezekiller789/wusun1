#include <stdio.h>

int main(){
    int c;
    float i;
    int root;
    float ac = 0.1;       //準確度
    printf("輸入一個值來開根號:");
    scanf("%d", &c);
    i=1;
    while(i*i<=c){
        if(i*i == c){
            printf("根號%d = %f\n", c, i*i);
            return 0;
        }
        ++i;
    
    }
    while((i*i-c)>0.01)
        i = i-0.01;
    printf("根號%d = %0.1f\n", c, (float)i);
}

