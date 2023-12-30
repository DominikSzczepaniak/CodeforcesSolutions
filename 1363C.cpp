#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

const int MAXN = 1005;

vector<vector<int>> adj(MAXN);
vector<int> poddrzewa(MAXN);
vector<bool> visited(MAXN);
int badaj(int s){
    visited[s] = true;
    if(adj[s].size() == 1){
        poddrzewa[s] = 0;
        return 1;
    }
    int wartosc = 0;
    for(int i : adj[s]){
        if(!visited[i]){
            wartosc += badaj(i);
        }
    }
    poddrzewa[s] = wartosc;
    return wartosc+1;
}

void solve(){
    int n, x;
    scanf("%d%d", &n, &x);
    for(int i = 1; i<=n; i++){
        adj[i].clear();
        poddrzewa[i] = 0;
        visited[i] = false;
    }
    for(int i = 0; i<n-1; i++){
        int a, b;
        scanf("%d%d", &a, &b);
        adj[a].pb(b);
        adj[b].pb(a);
    }
    badaj(x);
    int ile= max(0, poddrzewa[x]-1);
    if(ile % 2 == 1){
        printf("Ashish\n");
    }
    else{
        printf("Ayush\n");
    }
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        solve();
    }
}