#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

const int MAX = 2000;
vector<vector<int>> adj(MAX+5);
vector<bool> visited(MAX+5);
int ans = 0;

void dfs(int s, int odl){
    visited[s] = true;
    ans = max(ans, odl);
    for(int i : adj[s]){
        if(!visited[i]){
            dfs(i, odl+1);
        }
    }
}


int main(){
    int n;
    cin >> n;
    vector<int> dfsy;
    for(int i = 1; i<=n; i++){
        int a;
        cin >> a;
        if(a==-1){
            dfsy.pb(i);
            continue;
        }
        adj[a].pb(i);
        adj[i].pb(a);
    }
    for(int i : dfsy){
        dfs(i, 1);
    }
    cout << ans << endl;
}