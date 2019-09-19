#include <stdio.h>
#include <string.h>
#define MaxLine 1000
#define MaxChar 1000
int main(){
    int row, col, len=0, linecnt=0, Maxlen=0, Maxwordcnt=0, MaxWeightWordcnt=0;
    int MaxLenWordcnt=0;
    int i, j, MaxWeight=0, WeightSum=0;
    char word[MaxLine][MaxChar], MaxWord[MaxLine][MaxChar], MaxWeightWord[100][100];
    char MaxLenWord[MaxLine][MaxChar];
   // MaxWeightWord[0] = &MaxWord[0];
    for(i=0; scanf("%s", word[i])!=EOF; ++i)
        linecnt++;                      //算總共有幾個字串
    
    len = Maxlen = strlen(word[0]);     //把變數初始化
    for(i=0; i<linecnt; ++i){
        len = strlen(word[i]);          //這邊把前幾名最長的放進陣列，陣列最下面的才是最長字串
        if(len>=Maxlen){
            Maxlen = len;
            for(j=0; j<len; ++j){
                MaxWord[Maxwordcnt][j] = word[i][j];    //把這個目前最長的字串，一個字元一個字元放進一個陣列，叫MaxWord
            }
            ++Maxwordcnt;           //算總共把幾個字串丟進去，待會再拿這些字串去找最長字串跟權重最高的
        }
    }               //這邊做完之後，MaxWord不會所有字串都是最長，是由上往下越來越大，最下面是最長的，因為原理是
                    //把當時目前遇到最大的字串抄一份放進去，可能後面還有更長的還沒有抄，所以後來放的會越來越長

    for(row=Maxwordcnt-1; row>=0; --row){       //會從最下面開始的原因就是最長的字串會在最下面
        WeightSum = 0;
        if(Maxlen == (int) strlen(MaxWord[row])){     //把最長的字串抓出來算他的權重，如果抓到不是最長的字串的就跳出迴圈
            for(j=0; j<Maxlen; ++j){            //把最長字串抄進一個陣列擺好，因為可能有多個
                MaxLenWord[MaxLenWordcnt][j] = MaxWord[Maxwordcnt-1][j];
            }
            ++MaxLenWordcnt;                                        //計算總共有幾個長度都是最長的字串

            for(col=0; col<Maxlen; ++col){                          //如果這個字串長度是最大長度，就算出他的權重
                WeightSum = WeightSum + MaxWord[row][col];          //算最大權重
            }

            if(WeightSum > MaxWeight){                      //比較權重，把最大權重記下來，有可能剛好權重又一樣，所以把權重一樣
                MaxWeight = WeightSum;                      //的丟進一個陣列
                for(j=0; j<MaxWeight; ++j){
                    MaxWeightWord[MaxWeightWordcnt][j] = MaxWord[row][j];
                }                                           //把權重數最大的字串放進陣列，叫MaxWeightWord，裡面都是放
                ++MaxWeightWordcnt;                         //權重最大的字串
            }
        }
        else
            break;
    }
    
//    for(i=0; i<linecnt; i++)
//        printf("%s\n", word[i]);

    printf("Max Lengh Of Word : %d\n", Maxlen);
    for(i=0; i<MaxLenWordcnt; ++i)
        printf("%s\n", MaxLenWord[i]);
    
    printf("Max Weight Of Longest Word : %d\n", MaxWeight);
    for(i=0; i<MaxWeightWordcnt; ++i)
        printf("Max Lengh Of Heaviest Weight: %s\n", MaxWeightWord[i]);

    return 0;
}
