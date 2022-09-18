const int N = 10000;
vector<int>prime(N, 1);

void sieve(){
    prime[0] = prime[1] = 0;
    for(int i=2; i*i<=N; i++){
        if(prime[i]){
            for(int j = i*i; j<=N; j+=i){
                prime[j] =0;
            }
        }
    }
}
// O(n) -> Memory
// O(n log log n) -> time