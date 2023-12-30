#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
const ll MOD = 1e9 + 7;
const int MAX_N = 1e7;

vector<ll> DP(MAX_N+200);

void solve()
{
	int n;
	cin >> n;
	DP[0] = DP[1] = 0;
	DP[2] = 3;
	DP[3] = 6;
	for(int i = 4; i<=n; i++){
		if( (i-1)%2==1){
			DP[i] = ((DP[i-1]+1)%MOD*3%MOD)%MOD;
		}
		else{
			DP[i] = ((DP[i-1]-1)%MOD*3%MOD)%MOD;
		}
	}
	cout << DP[n] << endl;
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