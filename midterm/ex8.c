#include <stdio.h>

int main(){
    int i, x, y, m, n;
    scanf("%d", &x);
    scanf("%d", &y);

    if(x>y){
        for(i=y; i>0; --i){
            if(x%i==0 && y%i==0){
                printf("%d\n", i);
                return 0;
            }
        }
    }
    else
        for(i=x; i>0; --i){
            if(x%i==0 && y%i==0){
                printf("%d\n", i);
                return 0;
            }
        }


}
