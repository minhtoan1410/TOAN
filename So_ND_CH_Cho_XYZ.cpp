#include <bits/stdc++.h>

using namespace std;
//http://oj.28tech.com.vn/problem/math34
typedef long long ll;


inline ll gcd(ll a, ll b)
{
  if(b == 0) return a;
  return gcd(b, a % b);
}

inline ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }


int main()
{
    ll x, y, z, n;
    cin >> x >> y >> z >> n;
    ll tmp = lcm(lcm(x, y), z);
    ll nmin = (ll)pow(10, n - 1);
    ll nmax = (ll)pow(10, n);
    ll res = (nmin + tmp - 1)/tmp * tmp;
    if(res < nmax)
    {
        cout << res;
    }
    else{
        cout << -1;
    }
}
