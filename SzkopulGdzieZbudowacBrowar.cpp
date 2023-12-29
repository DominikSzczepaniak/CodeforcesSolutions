//https://szkopul.edu.pl/problemset/problem/Z1C91LB8rGYMxy6wRLBmbXba/site/?key=statement
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int zapotrzebowanie[n+1];
    int inputodl[n+1];
    for(int i = 1; i<=n; i++){
        int a, b;
        cin >> a >> b;
        zapotrzebowanie[i] = a;
        inputodl[i] = b;
    }
    int odleglosc[n+1][n+1];
    memset(odleglosc, INT_MAX-500, sizeof(odleglosc));
    for(int i = 1; i<=n; i++){
        odleglosc[i][i] = 0;
    }
    map<int, vector<pair<int, int>>> adj;
    adj[n].push_back({1, inputodl[n]});
    adj[n].push_back({n-1, inputodl[n-1]});
    adj[1].push_back({2, inputodl[1]});
    adj[1].push_back({n, inputodl[n]});
    for(int i = 1; i<=n; i++){
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
        q.push({0, i});
        while(!q.empty()){
            int node = q.top().second;
            int dist = q.top().first;
            q.pop();
            if(dist > odleglosc[i][node]){
                continue;
            }
            if(node == 1){
                for(auto u : adj[node]){
                    if(odleglosc[i][u.first] > odleglosc[i][node] + u.second){
                        odleglosc[i][u.first] = odleglosc[i][node] + u.second;
                        q.push({odleglosc[i][u.first], u.first});
                    }
                }
            }
            else if(node == n){
                for(auto u : adj[node]){
                    if(odleglosc[i][u.first] > odleglosc[i][node] + u.second){
                        odleglosc[i][u.first] = odleglosc[i][node] + u.second;
                        q.push({odleglosc[i][u.first], u.first});
                    }
                }
            }
            else{
                if(odleglosc[i][node+1] > dist + inputodl[node]){
                    odleglosc[i][node+1] = dist + inputodl[node];
                    q.push({odleglosc[i][node+1], node+1});
                }
                if(odleglosc[i][node-1] > dist + inputodl[node-1]){
                    odleglosc[i][node-1] = dist + inputodl[node-1];
                    q.push({odleglosc[i][node-1], node-1});
                }
            }
        }
    }
    ll ans = INT64_MAX;
    for(int i = 1; i<=n; i++){
        ll wynik = 0;
        for(int j = 1; j<=n; j++){
            wynik += 1ll * zapotrzebowanie[j] * odleglosc[i][j];
        }
        ans = min(wynik, ans);
    }
    cout << ans << endl;

    
}