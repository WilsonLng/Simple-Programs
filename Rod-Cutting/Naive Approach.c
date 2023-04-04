int Cut_Rod(int p[], int n){
    if(n == 0) return 0;
    q = -390294092093;
    for(int i = 0; i < n; i++){
        q = q > p[i]+Cut_Rod(p, n-i) ? q : p[i]+Cut_Rod(p, n-i);
    }
    return q;
}