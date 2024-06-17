#include <bits/stdc++.h>

using namespace std;
//http://oj.28tech.com.vn/problem/math26
//Nếu p là số nguyên tố và 2p - 1 cũng là số nguyên tố thì : 2p-1 * (2p - 1) sẽ là một số hoàn hảo.
typedef long long ll;

bool prime(long long n){
    if(n < 2){
        return 0;
    }
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0 ) return 0;
    }
    return 1;
}
bool is_perfect(ll n){
    for(int i = 1; i <= 33; i++){
        if(prime(i)){
            ll tmp1 = pow(2, i) - 1;
            if(prime(tmp1)){
                ll tmp2 = pow(2, i - 1);
                if(tmp1 * tmp2 == n){
                    return 1;
                }
            }
        }
    }
    return 0;
}
int main()
{
    ll n; cin >> n;
    is_perfect(n) ? cout << "YES" : cout << "NO";    
}
