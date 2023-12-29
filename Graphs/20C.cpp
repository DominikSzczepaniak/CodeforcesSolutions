#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve(){
    ll n, m;
    cin >> n >> m;
    vector<pair<ll, ll>> adj[n+1];
    vector<ll> dist(n+1, -1);
    vector<ll> parent(n+1, -1);
    vector<bool> visited(n+1, false);
    dist[1] = 0;
    ll a, b, c;
    for(ll i = 0; i<m; i++){
        cin >> a >> b >> c;
        adj[a].pb({b, c});
        adj[b].pb({a, c});
    }
    priority_queue<pair<ll, ll> , vector<pair<ll, ll> >, greater<pair<ll, ll> > > q;
    q.push({0, 1});
    while(!q.empty()){
        ll node = q.top().second;
        ll d = q.top().first;
        q.pop();
        if(!visited[node]){
            visited[node] = true;
            for(auto i: adj[node]){
                if( (dist[i.first]==-1) || (dist[i.first]>(d+i.second)) ){
                    dist[i.first] = d + i.second;
                    parent[i.first] = node;
                    q.push({d+i.second, i.first});
                }
            }
        }
    }
    if(dist[n] == -1){
        cout << -1 << endl;
        return;
    }
    ll s = n;
    vector<ll> ans;
    while(s != -1){
        ans.pb(s);
        s = parent[s];
    }
    reverse(ans.begin(), ans.end());
    for(ll i : ans){
        cout << i << " ";
    }
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
 
 