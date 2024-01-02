#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve(){
    int n;
    cin >> n;
    vector<int> liczby(n);
    map<int, int> mapa;
    for(int i = 0; i<n; i++){
        cin >> liczby[i];
        mapa[liczby[i]]++;
    }
    for(int i = 0; i<liczby.size(); i++){
        if(mapa[ liczby[i] ] == 1){
            cout << i+1 << endl;
            return;
        }
    }

}

int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}