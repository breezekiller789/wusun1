#include <stdio.h>

int determinate(int num){
    int i, cnt=0;
    if(num!=2 && num%2==0)          //偶數基數分開處理，這裡處理偶數
        return 0;                   //偶數肯定不是質數，除非2
    for(i=3; i*i<=num; i+=2){
        if(num%i == 0){
            return 0;
            break;
        }
    }
    return 1;
}

int main(){
    int i, getnum, cnt;

    while(scanf("%d", &getnum) != EOF){
        cnt = determinate(getnum);
        if(cnt == 0){
            printf("no\n");
            continue;
        }
        else{
            printf("yes\n");
            continue;
        }
    }
    return 0;

}
