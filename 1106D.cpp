#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MAXN = 1e5;

vector<vector<int>> adj(MAXN+5);
vector<bool> visited(MAXN+5);
vector<int> ans;
int MAXDP = 0;
void bfs(int s){
    priority_queue<int, vector<int>, greater<int>> q;
    q.push(s);
    visited[s] = true;
    while(!q.empty()){
        int u = q.top();
        ans.pb(u);
        q.pop();
        for(int v : adj[u]){
            if(!visited[v]){
                q.push(v);
                visited[v] = true;
            }
        }
    }
}

int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    for(int i = 0; i<m; i++){
        int a, b;
        scanf("%d%d", &a, &b);
        adj[a].pb(b);
        adj[b].pb(a);
    }
    bfs(1);
    for(int j : ans){
        printf("%d ", j);
    }
    printf("\n");

}