#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
//http://oj.28tech.com.vn/src/140979
bool t_prime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }

    return n > 1;
}
int main()
{
    ll a;
    cin >> a;
    for(ll i = 2; i <= sqrt(a); i++){
        if(t_prime(i)){
            cout << i * i << " ";
        }
    }
}
