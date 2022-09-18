int power(int b, int p, int m){
    int res =1;
    while(p){
        if(p%2){
            res = (res*b)%m;
            p--;
        }else{
            p/=2;
            b = (b*b)%m;
        }
    }
    return res;
}

// O(log n)