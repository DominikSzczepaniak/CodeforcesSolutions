#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MAXN = 5200;

int main(){
    int n;
    scanf("%d", &n);
    map<int, vector<int>> adj;
    for(int i = 0; i<n; i++){
        int a, b;
        scanf("%d%d", &a, &b);
        adj[b].pb(a);
        adj[a].pb(b);
    }
    int start;
    for(auto i : adj){
        if(adj[i.first].size() == 1){
            start = i.first;
            break;
        }
    }
    vector<int> ans;
    ans.pb(start);
    map<int, bool> used;
    used[start] = true;
    while(ans.size() != n+1){
        for(int i : adj[start]){
            if(used[i]){
                continue;
            }
            ans.pb(i);
            start = i;
            used[i] = true;
        }

    }
    for(int i : ans){
        printf("%d ", i);
    }
    printf("\n");


}