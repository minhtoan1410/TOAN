#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1000000007;

void solve(ll n){
    int cnt = 1;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            int res = 0;
            while(n % i == 0){
                res++;
                n /= i;
            }
            cnt *= res + 1;
        }
    }
    if(n > 1){
        cnt *= 2;
    }
    cout << cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n; cin >> n;
    solve(n);
}
