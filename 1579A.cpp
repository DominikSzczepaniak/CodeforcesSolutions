#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    string s;
    cin >> s;
    int a = 0, b = 0, c = 0;
    for(int i = 0; i<s.length(); i++){
        if(s[i]=='A'){
            a++;
        }
        else if(s[i] == 'B'){
            b++;
        }
        else{
            c++;
        }
    }
    b -= a;
    a = 0;
    if(b < 0 || b != c){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    // solve();
}