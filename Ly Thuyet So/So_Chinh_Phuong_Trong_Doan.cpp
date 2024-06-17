#include <bits/stdc++.h>
//http://oj.28tech.com.vn/problem/math21
using namespace std;

typedef long long ll;

int main()
{
    ll a, b; cin >> a >> b;
	int tmp = ceil(sqrt(a));
	for(ll i = tmp; i <= sqrt(b); i++){
		cout << i * i << " ";
	}
}
