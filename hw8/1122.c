to implement:
bubble sort
selection sort
insertion sort              

mention!! 
correction, performance, maintainability(可維護性). readability(可讀性)
documentation, flexibility,                                       

#define Bubble 0
#define Selection 1
#define Insertion 2

int main(int argc, char *argv[]){
    int *A;
    int n;
    int SortMethod;
    n = atoi(argv[2]);
    if(strcmp(argv[1], "-b") == 0)
        SortMethod = Bubble;
    if(strcmp(argv[1], "-s") == 0)
        SortMethod = Selection;
    if(strcmp(argv[1], "-i") == 0)
        SortMethod = Insertion;

    datagenerater(A, n);        
    
    //開始排序
    if(SortMethod == Bubble)
        BubbleSort(A, n);
    if(SortMethod == Selection)
        SelectionSort(A, n);
    if(SortMethod == Insertion)
        InsertionSort(A, n);

}

$time mysort -b 10000

malloc();       //int A[MaxStuCnt];
                //int *A;
                //A = (int *)malloc(sizeof(int)*N);
                //for(i=0; i<N; i++)
                //  A[i] = 0;       initialize

search: rand(); srand();  

$./a.out   -b       10000
argv[0]    argv[1]  argv[2];

