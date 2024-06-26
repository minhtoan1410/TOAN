#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
//http://oj.28tech.com.vn/problem/math31

ll phi_ham_euler(ll n){
    ll res = n;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            while(n % i == 0){
                n /= i;
            }
            res = res - res / i;
        }
    }
    if(n != 1){
        res = res - res / n;
    }
    return res;
}

int main()
{
    ll n; cin >> n;
    cout << phi_ham_euler(n);
}
