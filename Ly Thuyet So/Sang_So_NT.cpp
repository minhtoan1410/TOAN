#include <bits/stdc++.h>
using namespace std;
#define long long ll

int prime[100000001];
void sieve(){
    for(int i = 0; i < 100000001; i++){
        prime[i] = 1;
    }

    prime[0] = prime[1] = 0;
    for(int i = 2; i <= sqrt(100000001); i++){
        if(prime[i]){
            for(int j = i * i; j < 100000001; j += i){
                prime[j] = 0;
            }
        }
    }
}
int main(){
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        if(prime[i]){
            cout << i << endl;
        }
    }
}