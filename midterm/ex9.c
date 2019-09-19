#include <stdio.h>


int main(){
    int i, x, y;
    while((scanf("%d %d", &x, &y)) !=EOF){
        if(x==0 && y==0)
            return 0;
        if(x>y){
            for(i=1; i<1000000000; ++i)
                if((x*i)%y == 0){
                    printf("%d\n", x*i);
                    break;
                }
        }
        else{
            for(i=1; i<1000000000; ++i)
                if((y*i)%x == 0){
                    printf("%d\n", y*i);
                    break;
                }
        }
    }
    


}
