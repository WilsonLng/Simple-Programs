int Cut_Rod(int p[], int n){
    int *r = (int *)calloc(n, sizeof(int));
    return Mem_Cut_Rod_Aux(p, n, r);
}

int Mem_Cut_Rod_Aux(int p[], int n, int* r){
    if(n == 0) return 0;
    if(r[n] > 0) return r[n];
    else{
        q = -390294092093;
        for(int i = 0; i < n; i++){
            q = q > p[i]+Mem_Cut_Rod_Aux(p, n-1, r) ? q : p[i]+Mem_Cut_Rod_Aux(p, n-1, r);
        }
        r[n] = q;
    }
    return q;
}