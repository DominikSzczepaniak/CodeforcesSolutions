//https://szkopul.edu.pl/c/202108a/p/ulo/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve(){
	ll n, k;
    cin >> n >> k;
    vector<ll> input(n);
    for(ll i = 0; i<n; i++){
        cin >> input[i];
    }  
    ll ans = INT_MAX;
    for(int i = 0; i<n-k+1; i++){
        ll L = input[i];
        ll P = input[i+k-1];
        ll wynik;
        if(P<=0){
            wynik = abs(L);
        }
        else if(L >= 0){
            wynik = abs(P);
        }
        else{
            wynik = min(abs(L), abs(P)) * 2 + max(abs(L), abs(P));
        }
        ans = min(ans, wynik);
    }
    cout << ans << endl;

}

int main(){
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	solve();


	return 0;
}