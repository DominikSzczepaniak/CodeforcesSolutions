#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MAX = 1000000000;

void solve(){
    int n;
    cin >> n;
    if(n == 2){
        cout << -1 << endl;
        return;
    }
    if(n==1){
        cout << 1 << endl;
        return;
    }
    else{
        int ODP[n][n];
        vector<int> niep;
        vector<int> pa;
        for(int i = 1; i<=n; i++){
            if(i%2==0){
                pa.pb(i);
            }
            else{
                niep.pb(i);
            }
        }
        for(int i = 0; i<niep.size(); i++){
            ODP[i][0] = niep[i];
        }
        for(int i = 0; i<pa.size(); i++){
            ODP[niep.size()+i][n-1] = pa[i];
        }
        for(int i = 0; i<niep.size(); i++){
            for(int j = 1; j<n; j++){
                ODP[i][j] = ODP[i][j-1]+n;
            }
        }


        for(int i = niep.size(); i<n; i++){
            for(int j = n-2; j>=0;j--){
                ODP[i][j] = ODP[i][j+1] + n;
            }
        }
        if(n==3){
            ODP[2][0] = 5;
            ODP[2][1] = 8;
        }
        for(int i = 0; i<n; i++){
            for(int j=0; j<n; j++){
                cout << ODP[i][j] << " ";
            }
            cout << endl;
        }

    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;


}