const int N = 10000;
vector<int>prime(N, -1);

void sieve(){
    for(int i=2; i<=N; i++){
        if(prime[i] == -1){
            for(int j = i; j<=N; j+=i){
                if(prime[j] == -1)
                    prime[j] = i;
            }
        }
    }
}
void primeFact(int n){ // O(log n)
    while(n != -1){
        if(prime[n] == -1) break;
        cout << prime[n] << " ";
        n/=prime[n];
    }
    cout << endl;
}