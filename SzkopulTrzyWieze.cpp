//https://szkopul.edu.pl/problemset/problem/Grfouq9u3g_TYktFXO2sNjCU/site/?key=statement
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXM = 1e6;

void solve(){
    int n;
    cin >> n;
    vector<char> input(n+1);
    for(int i = 1; i<=n; i++){
        char c;
        cin >> c;
        input[i] = c;
    }
    vector<int> sumyc(n+1);
    vector<int> sumyb(n+1);
    vector<int> sumys(n+1);
    sumyb[0]=sumyc[0]=sumys[0] = 0;
    for(int i = 1; i<=n; i++){
        sumyb[i] = sumyb[i-1];
        sumys[i] = sumys[i-1];
        sumyc[i] = sumyc[i-1];
        if(input[i] == 'C'){
            sumyc[i]++;
        }
        else if(input[i] == 'S'){
            sumys[i]++;
        }
        else if(input[i] == 'B'){
            sumyb[i]++;
        }
    }
    int bestans = 1;
    for(int i = 1; i<=n; i++){
        int ans = 1;
        for(int j = 1; j<=n; j++){
            int ileb = sumyb[j]-sumyb[i-1];
            int ilec = sumyc[j]-sumyc[i-1];
            int iles = sumys[j]-sumys[i-1];
            bool bc=false, bs=false, cs=false;
            if(ileb == ilec){
                bc = true;
                if(ilec == 0 || ileb == 0){
                    bc = false;
                }
            }
            if(ileb == iles){
                bs = true;
                if(iles == 0 || ileb == 0){
                    bs = false;
                }
            }
            if(ilec == iles){
                cs = true;
                if(ilec == 0 || iles == 0){
                    cs = false;
                }
            }
            // cout << i << " " << j << " " << bs << " " << bc << " " << cs << " " << " " << ileb << " " << ilec << " " << iles << " " << j-i+1 << endl;
            if(!bc && !bs && !cs){
                ans = max(ans, j-i+1);
            }
        }
        bestans = max(ans, bestans);
    }
    cout << bestans << endl;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // int t;
    // cin >> t;
    // while(t--){
    //     solve();
    // }
    solve();
}
    
    