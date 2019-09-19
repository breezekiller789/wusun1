#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void swap(int *x, int *y){
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}
/*
 *從第一個開始往後比，只要有遇到比較小的，就和第一個換位置
 * 第一輪做完，前面1個就會是Sorted的（Ascending Order)，
 * 第二輪做完，前面2個就會是Sorted的。。。。。
*/
void selectionsort(int number){
//    printf("%d\n", number);
    int line[number];
    int i, j;
    srand((unsigned)time(0));
    for(i=0; i<number; i++){
        line[i] = rand();       //產生測資
//        printf("%d\n", line[i]);
    }
    for(i=0; i<number-1; i++)
        for(j=1; j<=number-1-i; j++){
            if(line[i] >= line[i+j])
                swap(&line[i], &line[i+j]);
        }
    for(i=0; i<number; i++)
        printf("%d\n", line[i]);

}

void bubblesort(int number){
    int line[number];
    int i, j;
    srand((unsigned)time(0));
    for(i=0; i<number; i++){        //產生測資
        line[i] = rand();
//        printf("%d ", line[i]);
    }
    for(i=0; i<number-1;++i)            
        for(j=0; j<number-i-1; ++j)
            if(line[j]>line[j+1])       //Asending order
                swap(&line[j], &line[j+1]);

    for(i=0; i<number; i++)
        printf("%d\n", line[i]);

}
/*
 * 一堆數字當中，第零個先當作排序好的，所以從第一個開始看，
 * 把第一個數字取出來（key），一個一個往前作比較，如果遇到比key還要大
 * 就往後shift一個位置，因為最後要把key插進去，最後要讓出一個位置給key
 * 當遇到比key還要小的，就把這個數字的前一個位置把key放進去，這個位置
 * 是上一個搬動過的，所以不怕蓋掉原本的，原本的已經被換到後面一個了。
*/

void insertionsort(int number){
    int i, j, key;
    int line[number];
    srand((unsigned)time(0));
    for(i=0; i<number; i++)     //產生測資
        line[i] = rand();
    for(i=1; i<number; i++){
        key = line[i];
        for(j=i-1; j>=0; j--){
            if(line[j] >= key)
                line[j+1] = line[j];
            else            //走到這裡代表遇到比較小的了，就可以把key插進去
                break;
        }
        line[j+1] = key;    /*要加一的原因是，比較的時候會是j，就是說j是比key小
                              所以不能把第j個放key，這樣就蓋掉了，要放後面
                              一個
                            */
    }
    for(i=0; i<number; i++)
        printf("%d\n", line[i]);
}

int main(int argc, char *argv[]){
    if(argc!=3)
        return 0;
    int number;
    number = atoi(argv[2]);
//    printf("%s\n", argv[1]);
//    printf("%d\n", number);
    if(strcmp(argv[1], "-i")==0)
        insertionsort(number);
    if(strcmp(argv[1], "-b")==0)
        bubblesort(number);
    if(strcmp(argv[1], "-s")==0)
        selectionsort(number);
    return 0;
}
