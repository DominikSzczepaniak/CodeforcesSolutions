#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n;
    cin >> n;
    int input[n];
    for(int i = 0; i<n; i++){
        cin >> input[i];
    }
    map<int, int> wystepuje;
    for(int i = 0; i<n; i++){
        wystepuje[input[i]]++;
        if(wystepuje[input[i]] == 3){
            cout << input[i] << endl;
            return;
        }
    }
    cout << -1 << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
 
}