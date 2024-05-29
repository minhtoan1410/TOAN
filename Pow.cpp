#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll pow2(int a, int b){
    int res = 1;
    while(b){
        if(b % 2 == 1){
            res *= a;
        }
        b /= 2;
        a *= a;
    }
    return res;
}

int main(){
    int a, b; cin >> a >> b;
    cout << pow2(a, b);
}