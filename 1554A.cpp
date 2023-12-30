#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

const int MAX = 1e6;

void solve(){
	int n;
	cin >> n;
	vector<ll> num(n);
	for(int i = 0; i<n; i++){
		cin >> num[i];
	}
	ll ans = 0;
	for(int i = 0; i<n-1; i++){
		ans = max(ans, num[i] * num[i+1]);
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
	// solve();
	return 0;
}