#include <stdio.h>

int sigma(int m){
    if(m <= 0)
        return 0;
    else
        return (m + sigma(m-1));
}
int main(){
    int a, i;
    printf("Enter An Integer:");
    scanf("%d", &a);
    i = sigma(a);
    printf("%i\n", i);

}
