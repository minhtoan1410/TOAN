#include <bits/stdc++.h>

using namespace std;
//http://oj.28tech.com.vn/problem/math25

typedef long long ll;



int main()
{
    ll n; cin >> n;
    int tmp = ceil(sqrt(n));
    if(tmp * tmp == n){
        cout << "YES";
    }else{
        cout << "NO";
    }
}
