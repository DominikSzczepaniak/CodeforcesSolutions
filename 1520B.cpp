#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MAX = 1000000000;


int main(){
    vector<ll> DP;
    int dlugosc = 1;
    for(int i = 1; i<=9; i++){
        string s = "";
        for(int j = 1; j<=9; j++){
            s += to_string(i);
            DP.pb(stoll(s));
        }
    }
    sort(DP.begin(), DP.end());
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ans = 0;
        for(int i = 0; i<DP.size(); i++){
            if(DP[i] <= n){
                ans++;
            }
            else{
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;


}