#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define pi pair<int, int>
const ll MOD = 1e9+7;

void solve()
{
	ll a, b, c;
	cin >> a >> b >> c;
	if(c >= a*b){
		cout << 1 << " " << -1 << endl;
	}
	else{
		if(a >= c){
			cout << -1 << " " << b << endl;
			return;
		}
		cout << min((ll)1, b-1) << " " << b << endl;
	}


}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	bool testcases = true;
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