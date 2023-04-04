int Cut_Rod(int p[], int n){
    int* r = (int *)calloc(n, sizeof(int));
    for(int j = 0; j < n; j++){
        for(int i = 0; i < j; i++){
            r[j] = r[j] > p[i]+r[j-1] ? r[j] : p[i]+r[j-1];
        }
    }
    return r[n];
}