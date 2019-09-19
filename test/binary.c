#include <stdio.h>
#include <string.h>

int main(){
    int i, tmp;
    long nnumber, word[32];
    while(scanf("%ld", &nnumber) != EOF){
        for(int bit=32-1; bit>=0; --bit){
            word[bit] = nnumber%2;
            nnumber = nnumber/2;
        }
        for(i=0; i<32; ++i){
            printf("%ld", word[i]);
            if(i==31)
                printf("\n");
        }
        for(i=0; i<32/2; ++i){
            tmp = word[i];
            word[i] = word[32-1-i];
            word[32-1-i] = tmp;
        }
        for(i=0; i<32; ++i){
            printf("%ld", word[i]);
            if(i==31)
                printf("\n");
        }
    }
    return 0;
}
