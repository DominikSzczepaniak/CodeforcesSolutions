#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
	ll n, k;
	cin >> n >> k;
	vector<ll> input(n);
	for(int i = 0; i<n; i++){
		ll a;
		cin >> a;
		input[i] = (k-a%k)%k;
	}
	sort(input.rbegin(), input.rend());
	map<ll, ll> ile;
	ll ilerownych = 0;
	for(int i = 0; i<n; i++){
		if(input[i] == 0){
			continue;
		}
		ile[input[i]]++;
		if(ilerownych < ile[input[i]]){
			ilerownych = ile[input[i]];
		}
	}
	ll ans=0;
	for(auto u : ile){
		if(u.second == ilerownych){
			ans = k*max((ll)0, (u.second-1)) + u.first + 1;
		}
	}
	cout << ans << endl;


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


	
	return 0;
}