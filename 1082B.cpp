#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MAXN = 5200;

int main(){
    int n;
    scanf("%d", &n);
    char input[n];
    scanf(" %s", input);
    string s = (string)input;
    vector<vector<int>> DP(2, vector<int>(n, 0));
    if(s[0] == 'G'){
        DP[0][0] = 1;
    }
    if(s[n-1] == 'G'){
        DP[1][n-1] = 1;
    }
    for(int i = 1; i<n; i++){
        if(s[i] == 'S'){
            DP[0][i] = 0;
            continue;
        }
        DP[0][i] = DP[0][i-1] + 1;
    }
    for(int i = n-2; i>=0; i--){
        if(s[i] == 'S'){
            DP[1][i] = 0;
            continue;
        }
        DP[1][i] = DP[1][i+1] + 1;
    }
    int ileG = 0;
    int ans = 0;
    for(int i = 0; i<n; i++){
        if(s[i] == 'G'){
            ileG++;
            ans = max({ans, DP[1][i], DP[0][i]});
        }
        if(s[i] == 'S'){
            if(i!=0 && i!=n-1){
                ans = max(DP[0][i-1] + 1 + DP[1][i+1], ans);
            }
            if(i==0){
                ans = max(DP[1][i+1], ans);
            }
            if(i==n-1){
                ans = max(ans, DP[0][i-1]);
            }
        }
        // printf("%d %d\n", i, ans);
    }
    printf("%d\n", min(ans, ileG));
}