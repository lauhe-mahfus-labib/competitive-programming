int phi(int n){
    int res =n;
    for(int i =2; i*i<=n; i++){
        if(n%i ==0){
            res/=i;
            res*=(i-1);

            while(n%i ==0) n/=i;
        }
    }
    if(n>1){
        res/=n;
        res*=(n-1);
    }
    return res;
}

// O(sqrt(n))

/*
    Euler's totient function couts the number of positive interger upto n which is co-prime to n {gcd = 1}.
    phi(5) = 4;
    gcd(1, 5) = gcd(2, 5) = gcd(3, 5) = gcd(4, 5) = 1;
*/

// n = p1^x1 * p2^x2 * p3^x3....pk^xk (prime factorization)
// phi(n) = n * ((p1-1)/p1) * ((p2-1)/p2) * ((p3-1)/p3) ..... ((pk-1)/pk)