#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, k, p;
    cin >> n >> k >> p;
    ll a[n];
    ll b[k];
    for(ll i = 0; i<n; i++){
        cin >> a[i];
    }
    for(ll j = 0; j<k; j++){
        cin >> b[j];
    }
    sort(a, a+n);
    sort(b, b+k);
    ll dp[k+1][n+1];
    const ll inf = 1e17;
    for(int i = 0; i<=k; i++){
        for(int j = 0; j<=n; j++){
            dp[i][j] = inf;
        }
    }
    dp[0][0] = 0;
    for(int i = 0; i<k; i++){
        for(int j = 0; j<=n; j++){
            // nie biore
            dp[i+1][j] = min(dp[i+1][j], dp[i][j]);
            //biore
            if(j<n){
                dp[i+1][j+1] = min(dp[i+1][j+1], max(dp[i][j], abs(a[j]-b[i]) + abs(b[i] - p)));
            }
        }
    }
    cout << dp[k][n] << endl;

    
    return 0;
 
}