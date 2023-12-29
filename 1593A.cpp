#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int a, b,c;
    cin >> a >> b >> c;
    cout << max(0, max(b, c) - a + 1) << " " << max(0, max(a, c) - b + 1) << " " << max(0, max(b, a) - c + 1) << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }


}
 