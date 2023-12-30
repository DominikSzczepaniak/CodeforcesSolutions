// https://cses.fi/problemset/task/1130/
#include <iostream>
#include <vector>
using namespace std;
int dp[200001][2];
vector<int> adj[200001];
int n;

void solve(int start, int parent){
    vector<int> prefix;
    vector<int> sufix;
    dp[start][0] = dp[start][1] = 0;
    bool leaf = true;
    for(auto child : adj[start]){
        if(child != parent){
            leaf = false;
            solve(child, start);
        }
    }
    if(leaf ){
        return;
    }

    for(auto child : adj[start]){
        if(child != parent){
            int wieksze = max(dp[child][0], dp[child][1]);
            prefix.push_back(wieksze);
            sufix.push_back(wieksze);  
        }
    }
    int a = prefix.size();
    for(int i = 1; i<a; i++){
        prefix[i] += prefix[i-1];
    }
    for(int i = sufix.size()-2; i>=0; i--){
        sufix[i] += sufix[i+1];
    }
    dp[start][0] = sufix[0];
    int c_no = 0;
    for(auto k : adj[start]){
        if(k==parent) continue;

        int left = (c_no == 0 ? 0 : prefix[c_no-1]);
        int right = (c_no == int(sufix.size())-1 ? 0 : sufix[c_no+1]);
        dp[start][1] = max(dp[start][1], left + right + 1 + dp[k][0]);
        c_no++;
    }
}

int main(){
    cin >> n;
    for(int i = 0; i < n-1; i++){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    solve(1, 0);
    cout << max(dp[1][0], dp[1][1]) << endl;

}
