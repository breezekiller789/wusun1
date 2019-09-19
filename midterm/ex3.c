#include <stdio.h>


int main(){
    int n, i;
    int cnt;

    while((scanf("%d", &n)) != EOF){
        cnt = 0;
        for(i=1; i<=n; ++i)
            if(n%i == 0)
                ++cnt;
        if(cnt>2)
            printf("is_not_prime\n");
        else
            printf("is_prime\n");
    }


}
