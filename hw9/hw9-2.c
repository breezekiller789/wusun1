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
 
int main(){
    char line[MaxLine], *ptr;
    int i, j, Max, Min, len, Cnt[PatCnt];
    int order[PatCnt];
    Max = Min = j = len = 0;
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
    bubblesort(order, Cnt);
 
    for(i=0; i<PatCnt; i++){
        if((Cnt[i] == Cnt[i+1]) && strcmp(pat[order[i]], pat[order[i+1]]) > 0 ){
            swap(&order[i], &order[i+1]);
        }
 
//        printf("order[%d] = %d\n", i, order[i]);
        printf("%d %s\n", Cnt[i], pat[order[i]]);
    }
    return 0;
 
}
