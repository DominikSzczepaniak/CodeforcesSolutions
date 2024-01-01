#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MAX = 200000;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char, bool> asd;
    bool sus = false;
    for(int i = 0; i<n; i++){
        if(asd[s[i]] == true && s[i-1] != s[i]){
            sus = true;
        }
        asd[s[i]] = true;
    }
    if(sus){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
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