#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9+7;

long long power(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = (res * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }
    return res;
}

void solve(){
    ll k;
    cin>> k;
    ll wynik = 6;
    ll ile = power(2, k, INT64_MAX) - 2;
    wynik *= power(4, ile, MOD);
    cout << wynik%MOD << endl;

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int t;
    // cin >> t;
    // while(t--){
    solve();
    // }
   



}
 