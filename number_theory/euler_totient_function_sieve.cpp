int N = 1000;
vector<int>phi(N);

void phi_sieve(){
    for(int i =1; i<=N; i++){
        phi[i] =i;
    }
    for(int i=2; i<=N; i++){
        if(phi[i] == i){
            for(int j =i; j<=N; j+=i){
                phi[j]/=i;
                phi[j]*=(i-1);
            }
        }
    }
}

// O(n log log n)