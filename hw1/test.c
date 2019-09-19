#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int A;
    int B;

    scanf("%d %d", &A, &B);

    if(A > B)
        printf("A is greater than B!\n");
    else if(A == B)
        printf("A is equal than B\n");
    else
        printf("A is smaller than B!\n");
}
