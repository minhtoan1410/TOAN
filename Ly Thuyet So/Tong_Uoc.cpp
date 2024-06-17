#include <bits/stdc++.h>
//http://oj.28tech.com.vn/problem/math23
using namespace std;

typedef long long ll;

ll sum_cd(ll n){
    ll sum = 0;
    for(ll i = 1; i <=  sqrt(n); i++){
        if(n % i == 0 && n / i != i){
            sum += i + n / i;
        }else if(n % i == 0 && i * i == n){
            sum += i;
        }
    }
    return sum;
}

int main()
{
    ll n; cin >> n;
    cout << sum_cd(n);
}
