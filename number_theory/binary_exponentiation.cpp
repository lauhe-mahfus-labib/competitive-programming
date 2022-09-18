int power(int b, int p){
    int res =1;
    while(p){
        if(p%2){
            res*=b;
            p--;
        }else{
            p/=2;
            b*=b;
        }
    }
    return res;
}
// O(log n)

/*
    * When p is even p/2 and base^2
    * when p is odd power-1 and base*res
    * when p = 0 res is our ans
*/