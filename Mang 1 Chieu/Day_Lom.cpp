#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int a[10001];
vector<int> DT;
vector<int> LT;
vector<int> DG;
vector<int> LG;


void tangxuoi(int n){
    DT.resize(n);
    LT.resize(n);
    DT[0] = 1;
    LT[0] = n;
    for(int i = 1; i < n; i++){
        DT[i] = 1;
        LT[i] = n;
        for(int j = i - 1; j >= 0; j--){
            if(a[i] > a[j] && DT[i] < DT[j] + 1){
                DT[i] = DT[j] + 1;
                LT[i] = j;
            }
        }
    }
}

void tangnguoc(int n){
    DG.resize(n);
    LG.resize(n);
    DG[n - 1] = 1;
    LG[n - 1] = n;
    for(int i = n - 2; i >= 0; i--){
        DG[i] = 1;
        LG[i] = n;
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j] && DG[i] < DG[j] + 1){
                DG[i] = DG[j] + 1;
                LG[i] = j;
            }
        }
    }
}

void xuli(int n){
    int max_val = DT[0] + DG[0];
    int pos = 0;
    for(int i = 1; i < n; i++){
        if(DT[i] + DG[i] > max_val){
            max_val = DT[i] + DG[i];
            pos = i;
        }
    }
    int i = pos;
    while(LT[i] != n){
        DT[i] = -DT[i];
        i = LT[i];
    }
    DT[i] = -DT[i];
    i = LG[pos];
    while(LG[i] != n){
        DT[i] = -DT[i];
        i = LG[i];
    }
    DT[i] = -DT[i];
    cout << max_val - 1 << endl;
    for (int i = 0; i < n; i++) {
        if (DT[i] < 0) {
            cout << a[i] << " ";
        }
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    tangxuoi(n);
    tangnguoc(n);
    xuli(n);
}
