#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
//http://oj.28tech.com.vn/problem/math11
int digit(int a){
    if(a % 2 == 0){
        return 2;
    }
    for(int i = 3; i <= sqrt(a); i += 2){
        if(a % i == 0){
            return i;
        }
    }

    return a;
}

int main()
{
    int a;
    cin >> a;
    cout << "1\n";
    for(int i = 2; i <= a; i++){
        cout << digit(i) << "\n";
    }
    

}
