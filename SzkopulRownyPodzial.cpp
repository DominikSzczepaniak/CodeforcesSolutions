//https://szkopul.edu.pl/c/202108a/p/row/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve(){
	ll n;
	cin >> n;
	vector<ll> input(n+1);
	vector<ll> sumy(n+1);
	sumy[0] = 0;
	for(ll i = 1; i<=n; i++){
		cin >> input[i];
		sumy[i] = sumy[i-1] + input[i];
	}
	// for(int i = 1; i<=n; i++){
	// 	cout << sumy[i] << " ";
	// }
	// cout << endl;
	// cout << "====================" << endl;
	vector<pair<ll, int>> prefiksy(n+1);
	vector<pair<ll, int>> sufiksy(n+1);
	ll last = 0;
	ll lastwynik;
	for(ll i = 1; i<=n; i++){
		ll prawa = sumy[i] - sumy[last];
		ll lewa = sumy[last];
		ll lastwynik = abs(prawa - lewa);
		for(ll j = last+1; j<=i; j++){
			prawa = sumy[i]- sumy[j];
			lewa = sumy[j];
			ll wynik = abs(prawa - lewa);
			if(wynik > lastwynik){
				break;
			}
			else{
				lastwynik = wynik;
				last = j;
			}
		}
		prefiksy[i] = {lastwynik, last};
	}
	last = n;
	for(ll i = n; i>=1; i--){
		ll prawa = sumy[n]-sumy[last-1];
		ll lewa = sumy[last-1]-sumy[i-1];
		ll lastwynik = abs(prawa-lewa);
		for(ll j = last-1; j>=i; j--){
			prawa = sumy[n]-sumy[j-1];
			lewa = sumy[j-1] - sumy[i-1];
			ll wynik = abs(prawa - lewa);
			if(wynik > lastwynik){
				break;
			}
			else{
				lastwynik = wynik;
				last = j;
			}
		}
		sufiksy[i] = {lastwynik, last};
	}

	ll ans = INT_MAX;
	for(ll i = 2; i<=n-2; i++){//podział jest przed i
		ll suma_prawa = sumy[n] - sumy[i];
		ll suma_lewa = sumy[i];
		ll A = sumy[prefiksy[i].second];
		ll B = suma_lewa - A;
		ll C = sumy[n] - sumy[sufiksy[i+1].second-1];
		ll D = suma_prawa - C;
		ans = min(ans, max({A,B,C,D}) - min({A,B,C,D})); 
	}
	cout << ans << endl;
}

int main(){
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	solve();


	return 0;
}