#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXM = 1e6;

void solve(){
    int n;
    cin >> n;
    for(int i = 1; i<=n; i++){
        int ileotwartych = n-i;
        for(int j = 0; j<ileotwartych; j++){
            cout << "(";
        }
        for(int j = 0; j<i; j++){
            cout << "()";
        }
        for(int j = 0; j<ileotwartych; j++){
            cout << ")";
        }
        cout << endl;
    }

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
    
    