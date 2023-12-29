// https://szkopul.edu.pl/problemset/problem/jgCcEjQu3kdpM4BmxA6GujfX/site/?key=statement
#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<int> adj[300001];
int dp[300001];
int dfs(int s, int k, int p){
    int wynik = 0;
    for(int i : adj[s]){
        if(i == p){
            continue;
        }
        wynik = wynik + dfs(i, k, s) + 1;
    }
    dp[s] = max(0, wynik-k);
    return max(0, wynik-k);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    // adj.resize(n+1);
    for(int i = 0; i<n-1; i++){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int start = 0, end = n;
    while(start < end){
        memset(dp, 0, sizeof(dp));
        int mid = (start+end)/2;
        dfs(1, mid, 1);
        if(dp[1] > 0){
            start = mid+1;
        }
        else{
            end = mid;
        }
    }
    cout << start << endl;
}