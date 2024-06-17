#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
//http://oj.28tech.com.vn/problem/math17

int pt(int n){
    int sum = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            while(n % i == 0){
                sum = i;
                n /= i;
            }
        }
    }
    if(n != 1){
        sum = n;
    }
    return sum;
}


int main()
{
    int n; cin >> n;
    while(n--){
        int a; cin >> a;
        cout << pt(a) << "\n";
    }
}
