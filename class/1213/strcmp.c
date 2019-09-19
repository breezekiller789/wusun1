int strcmp(char x[], char y[]){
    int i, len;
    len = strlen(x);
    for(i=0; i<len; i++)
        if(x[i]!=y[i])
            return x[i]-y[i];
    return x[i]-y[i];
}



//把指標當陣列用

    int A[100];
    int *p;
    p=A;
    //initialize
    for(i=0; i<100; i++){
        A[i] = 0;
        //*p = 0;
        //*p++ = 0;
    }
