#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// http://oj.28tech.com.vn/problem/math12
void pt(ll n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            int cnt = 0;
            while(n % i == 0){
                ++cnt;
                n /= i;
            }
            if(n == 1){
                cout << i << "^" << cnt;
            }else{
                cout << i << "^" << cnt << " * ";
            }
        }
    }
    if(n != 1){
        cout << n << "^" << 1; 
    }
}
int main()
{
    ll n; cin >> n;
    pt(n);
}
