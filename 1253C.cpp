#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve(){
	ll n, m;
	cin >> n >> m;
	vector<ll> input(n);
	for(ll i = 0; i<n; i++){
		cin >> input[i];
	}
	sort(input.begin(), input.end());
	ll iledodawac = 0;
	ll sum = 0;
	ll dzien = 0;
	vector<ll> dodawanie(m);
	for(ll i = 0; i<n; i++){
		sum += input[i];
		sum += dodawanie[i%m];
		dodawanie[i%m] += input[i];
		cout << sum << " ";
	}
	cout << endl;

}

int main(){
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	// int t;
	// cin >> t;
	// while(t--){
	// 	solve();
	// }
	solve();


	return 0;
}