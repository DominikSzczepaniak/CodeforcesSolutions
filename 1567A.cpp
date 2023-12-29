#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MAXN = 3e5;

void solve(){
    int n;
    cin >> n;
    for(int i = 0; i<n; i++){
        char c;
        cin >> c;
        if(c == 'U'){
            cout << 'D';
        }
        else if(c == 'D'){
            cout << 'U';
        }
        else{
            cout << c;
        }
    }
    cout << endl;
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



    
}