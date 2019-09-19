#include <stdio.h>

void adder(int x, int y);
void multiplier(int x, int y);
void substracter(int x, int y);
void divider(int x, int y);


int main(){
    int c, i=0;           //use for loop
    int option;         //決定加減乘除
    int x, y;           //輸入變數X,Y
    printf("Menu:\n");
    printf("1.add\n");
    printf("2.multiply\n");
    printf("3.substract\n");
    printf("4.divide\n");
    printf("Please input the option:\n");
    scanf("%d", &option);
    if(option > 4 || option < 1){
        return 0;
    }

    printf("Please input the number 1:\n");
    scanf("%d", &x);
    printf("Please input the number 2:\n");
    scanf("%d", &y);
    if(option <= 4 || option >= 1){
        if(option == 1)
            adder(x, y);
        if(option == 2)
            multiplier(x, y);
        if(option == 3)
            substracter(x, y);
        if(option == 4){
            if(y == 0){
                return 0;
            }
            divider(x, y);
        }
    }
    
    return 0;
}
void adder(int x, int y){
        int result;
        result = x + y;
        printf("%d+%d=%d\n", x, y, result);
}
void multiplier(int x, int y){
        int result;
        result = x * y;
        printf("%d*%d=%d\n", x, y, result);
}
void substracter(int x, int y){
        int result;
        result = x - y;
        printf("%d-%d=%d\n", x, y, result);
}
void divider(int x, int y){
        int result;
        result = x / y;
        printf("%d/%d=%d\n", x, y, result);
}


