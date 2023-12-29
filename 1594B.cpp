#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9+7;

void solve(){
    ll n, k;
    cin >> n >> k;
    vector<bool> binary(38, 0);
    vector<ll> powers(38, 0);
    ll wynika = 1;
    powers[0] = wynika;
    for(ll i =1 ;i<=31;i++){
        powers[i] = (powers[i-1]*n)%MOD;
    }
    for(ll i = 30; i>=0; i--){
        ll a = 1<<i;
        if(k >= a){
            binary[i] = 1;
            k -= a;
        }
    }
    ll wynik = 0;
    for(ll i = 0; i<=30; i++){
        if(binary[i]){
            wynik += powers[i]%MOD;
            wynik %= MOD;
        }
    }
    cout << wynik%MOD << endl;

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
 