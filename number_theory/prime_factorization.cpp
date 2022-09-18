void primeFact(int n){
    for(int i =2; i*i<=n; i++){
        if(n%i == 0){
            int c =0;
            while(n%i ==0){
                c++;
                n/=i;
            }
            cout << i << "^" << c <<endl;
        }
    }
    if(n>1) cout << n << "^" << 1 <<endl;
}
// O(sqrt(n))