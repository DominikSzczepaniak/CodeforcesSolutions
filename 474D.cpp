#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
const ll MAX = 1e5;
const ll MOD = 1e9 + 7;
vector<ll> DP(MAX+10);

void solve()
{
	int n, k;
	cin >> n >> k;
	vector<ll> sumy(MAX+10);
	DP[0] = 1;
	sumy[0] = 1;
	for(int i = 1; i<=1e5; i++){
		if(i >= k){
			DP[i] = (DP[i-1]%MOD + DP[i-k]%MOD)%MOD;
		}
		else{
			DP[i] = DP[i-1]%MOD;
		}
	}
	for(int i = 1; i<=1e5; i++){
		sumy[i] = (sumy[i-1]%MOD + DP[i]%MOD)%MOD;
	}
	for(int i = 0; i<n; i++){
		int a, b;
		cin >> a >> b;
		ll ans = (sumy[b]+MOD - sumy[a-1])%MOD;
		ans += MOD;
		cout << ans % MOD << endl;
		// cout << (sumy[b]+MOD - sumy[a-1])%MOD << endl;
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	bool testcases = false;
	if (testcases)
	{
		int t;
		cin >> t;
		while (t--)
		{
			solve();
		}
	}
	else
	{
		solve();
	}
	return 0;
}