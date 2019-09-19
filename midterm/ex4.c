#include <stdio.h>

int main(){
    long long i, j;
    long long n;
    int cnt;
    while((scanf("%lld", &n)) !=EOF){
        for(i=n; i>=1; --i){
            cnt = 0;
            for(j=2; j<=i; ++j){
                if(i%j == 0)
                    ++cnt;
                if(cnt>1)
                    continue;
            }
            if(cnt==1){
                printf("%lld\n", i);  
                break;
            }
        }
    }



}
