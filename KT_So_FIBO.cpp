#include <bits/stdc++.h>

using namespace std;
//http://oj.28tech.com.vn/problem/math64
typedef long long ll;

//5 * (n * n) + 4 là số chính phương thì n là số fibonacci

int main()
{
	int n; cin >> n;
	int tmp = 5 * (n * n) + 4;
	int tmp2 = ceil(sqrt(tmp));
	if(tmp2 * tmp2 == tmp){
		cout << "YES";
	}else{
		cout << "NO";
	}
}
