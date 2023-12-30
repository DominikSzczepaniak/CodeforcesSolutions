#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define pi pair<int, int>
const ll MOD = 1e9+7;

void solve()
{
	int n, k, d;
	cin >> n >> k >> d;
	vector<vector<ll>> DP(2, vector<ll>(n+1000));
	for(int i = 1; i<=k; i++){
		if(i >= d){
			DP[1][i] = 1;
		}
		else{
			DP[0][i] = 1;
		}
	}
	for(int i = 0; i<=n; i++){
		for(int j = 1; j<=k; j++){
			if(j >= d){
				DP[1][i+j] += DP[0][i]%MOD;
				DP[1][i+j]%MOD;
				DP[1][i+j] += DP[1][i]%MOD;
				DP[1][i+j]%MOD;
			}
			else{
				DP[1][i+j] += DP[1][i]%MOD;
				DP[1][i+j]%MOD;
				DP[0][i+j] += DP[0][i]%MOD;
				DP[0][i+j]%MOD;
			}
		}
	}
	cout << DP[1][n]%MOD << endl;


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