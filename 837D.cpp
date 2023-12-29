#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MAXN = 5e4+5;

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    int DP[n+1][(n+1)*30];
    memset(DP, -1, sizeof(DP));
    DP[0][0] = 0;
    for(int i = 0; i<n; i++){
        ll a;
        cin >> a;
        int p = 0, d = 0;
        while(a%5==0){
            a/= 5;
            p++;
        }
        while(a%2==0){
            a/=2;
            d++;
        }
        for(int j = k-1; j>=0; j--){
            for(int l = 0; l<n*30; l++){
                if(DP[j][l] != -1){
                    DP[j+1][l+p] = max(DP[j+1][l + p], DP[j][l] + d);
                }
            }
        }
    }
    int ans =0;
    for(int i = 0; i<n*30; i++){
        ans = max(ans, min(i, DP[k][i]));
    }
    cout << ans << endl;
    
}