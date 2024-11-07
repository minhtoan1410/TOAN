#include <bits/stdc++.h>
using namespace std;
using ll = long long;
vector<vector<pair<int, ll>>> ve(100005);
ll dijsktra(int s, int t){
    priority_queue<pair<int, ll>, vector<pair<int, ll>>, greater<pair<int, ll>>> pq;
    pq.push({0, s});
    vector<ll> cnt(100005, LLONG_MAX); 
    cnt[s] = 0;
    while(!pq.empty()){
        ll cost = pq.top().first;//giá trị từ đỉnh trước đến đỉnh hiện tại
        int dinh = pq.top().second;//đỉnh hiện tại
        pq.pop();
        if(cost > cnt[dinh]){//nếu đường đi đến đỉnh hiện tại lớn hơn đường đi nhỏ nhất thì loại
            continue;
        }
        for(pair<ll, int> i : ve[dinh]){
            ll gia = i.first;
            int edge = i.second;
            if(cnt[dinh] + gia < cnt[edge]){//nếu từ đỉnh hiện tại đến đỉnh kế có đường đi tối ưu hơn
                cnt[edge] = cnt[dinh] + gia;
                pq.push({cnt[edge], edge});
            }
        }
    }
    return cnt[t];
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, m, s, t;
    cin >> n >> m >> s >> t;
    for(int i = 0; i < m; i++){
        int st, ed; ll co; cin >> st >> ed >> co;
        ve[st].push_back({co, ed});
        ve[ed].push_back({co, st});
    }
    cout << dijsktra(s, t);
}