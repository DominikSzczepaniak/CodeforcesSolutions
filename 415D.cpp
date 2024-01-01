#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
const ll MOD = 1e9+7;

vector<vector<int>> dzielniki(2001);


void generuj_dzielniki(){
	for(int i = 1; i<=2000; i++){
		for(int j = 1; j*j<=i; j++){
			if(i%j == 0){
				if(i/j == j){
					dzielniki[i].pb(j);
					continue;
				}
				dzielniki[i].pb(i/j);
				dzielniki[i].pb(j);
			}
		}
	}
}

void solve()
{
	int n, k;
	cin >> n >> k;
	ll ans = 0;
	generuj_dzielniki();
	vector<vector<ll>> DP(2001, vector<ll>(2001));
	for(int i = 0; i<=n; i++){
		DP[1][i] = 1;
	}
	for(int i = 2; i<=k; i++){
		for(int j = 1; j<=n; j++){
			for(int u : dzielniki[j]){
				DP[i][j] += DP[i-1][u]%MOD;
				DP[i][j] %=MOD;
			}
		}
	}
	for(int i = 1; i<=n; i++){
		ans += DP[k][i];
		ans %= MOD;
	}
	cout << ans%MOD << endl;
	
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