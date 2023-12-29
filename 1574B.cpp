#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXM = 1e6;

void solve(){
    int wartosci[3];
    int d;
    cin >> wartosci[0] >> wartosci[1] >> wartosci[2];
    cin >> d;
    int MAX = wartosci[0] - 1 + wartosci[1] - 1 + wartosci[2] - 1;
    sort(wartosci, wartosci+3);
    int MIN  = wartosci[2] - 1 - (wartosci[0] + wartosci[1]);
    if(d >= MIN && d <= MAX){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
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
    
    