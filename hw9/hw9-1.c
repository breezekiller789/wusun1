#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MaxLine 1024
 
char *pat[] = {"Apple", "Google", "Facebook", "Amazon", "Microsoft", "Samsung", "Intel", "AMD", "Oracle", "Sony"};
int PatCnt = 10;
 
 
void swap(int *x, int *y){
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}
/* 
void stringswap(char x[MaxLine], char y[MaxLine]){
    char tmp[MaxLine];
    int i, len;
    printf("x = %s, y = %s\n", x, y);
 
    printf("strlen(x) = %d\n", len = strlen(x));
    for(i=0; i<len=strlen(x); i++){
        tmp[i] = x[i];
    }
    tmp[i] = '\0';
    printf("tmp = %s\n", tmp);
 
    printf("strlen(y) = %d\n", len = strlen(y));
    printf("y = %s\n", y);
    for(i=0; i<strlen(y); i++){
        x[i] = y[i];
    }
    printf("x = %s\n", x);
    printf("strlen(tmp) = %d\n", len = strlen(tmp));
    for(i=0; i<strlen(y); i++){
        y[i] = tmp[i];
    }
    printf("y = %s\n", y);
//    printf("Before Swap\n");
//    printf("After Swap\n");
}
*/
 
void bubblesort(int order[PatCnt], int Cnt[PatCnt]){
//Implement
    int i, j;
    for(i=0; i<PatCnt-1; i++){
        for(j=0; j<PatCnt-1-i; j++){
            if(Cnt[j] <= Cnt[j+1]){
                swap(&order[j], &order[j+1]);
                swap(&Cnt[j], &Cnt[j+1]);
            }
        }
    }
 
}
 
void insertionsort(int order[PatCnt], int Cnt[PatCnt]){
    int i, j, CntKey, OrderKey;
    for(i=1; i<PatCnt; i++){
        CntKey = Cnt[i];
        OrderKey = order[i];
        for(j=i-1; j>=0; j--){
//            if(CntKey == Cnt[j])
//                continue;
            if(CntKey > Cnt[j]){
                Cnt[j+1] = Cnt[j];
                order[j+1] = order[j];
            }
            else
                break;
        }
        Cnt[j+1] = CntKey;
        order[j+1] = OrderKey;
    }
/*
        for(i=0; i<PatCnt; i++){
            printf("order[%d] = %d\n", i, order[i]);
        }
*/
//    for(i=0; i<PatCnt; i++)
//        printf("order[%d] = %d\n", i, order[i]);
//        printf("Cnt[%d] = %d\n", i, Cnt[i]);
}
 
 
 
int main(){
    char line[MaxLine], *ptr;
    int i, Cnt[PatCnt];
    int order[PatCnt];
    for(i=0; i<PatCnt; i++){
        order[i] = i;
        Cnt[i] = 0;
//        printf("%c\n", pat[i][0]);
//        printf("Pat[%d] = %s\n", i, pat[i]);
    }
/*
    for(i=0; i<PatCnt; i++)
        printf("order[%d] = %d\n", i, order[i]);
*/
    while(fgets(line, MaxLine, stdin)){
//        printf("len=%d\n", len);
        for(i=0; i<PatCnt; i++){
            ptr = line;
            while((ptr = strstr(line, pat[i]))){
 //               printf("pat[%d] = %s\n", i, pat[i]);
                Cnt[i]++;
//                len = strlen(pat[i]);
//                printf("strlen(pat[%d]) = %d\n", i, len);
//                ptr += strlen(pat[i]);    //改成這樣就不能用，為什麼
                *ptr += strlen(pat[i]);
            }
 
        }
 
 
    }
//    insertionsort(order, Cnt);
    bubblesort(order, Cnt);
/*
    for(i=0; i<PatCnt; i++){
        printf("order[%d] = %d\n", i, order[i]);
    }
*/
/*
    for(i=0; i<PatCnt; i++){
        for(j=0; j<PatCnt; j++){
            if(Cnt[j] == Cnt[j+1]){
                printf("pat[%d] = %s, pat[%d] = %s\n", order[j], pat[order[j]], order[j+1], pat[order[j+1]]);
                if(strcmp(pat[order[j]], pat[order[j+1]]) > 0){
                    stringswap(pat[order[j]], pat[order[j+1]]);
                }
                printf("pat[%d] = %s, pat[%d] = %s\n", order[j], pat[order[j]], order[j+1], pat[order[j+1]]);
            }
        }
 
    }
*/
 
    for(i=0; i<PatCnt; i++){
        if((Cnt[i] == Cnt[i+1]) && strcmp(pat[order[i]], pat[order[i+1]]) > 0 ){
            swap(&order[i], &order[i+1]);
        }
 
//        printf("order[%d] = %d\n", i, order[i]);
        printf("%d %s\n", Cnt[i], pat[order[i]]);
    }
    return 0;
 
}
