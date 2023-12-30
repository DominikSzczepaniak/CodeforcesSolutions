#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define pi pair<int, int>
const ll MOD = 1e9+7;

void solve()
{
	ll r, g, b;
	cin >> r >> g >> b;
	ll nomixing = r/3 + g/3 + b/3;
	ll onemixing=0;
	ll twomixing=0;
	if(r>=1 && g>=1 && b >= 1){
		onemixing = 1 + (r-1)/3 + (g-1)/3 + (b-1)/3;
	}
	if(r>=2 && g>=2 && b >= 2){
		twomixing = 2 + (r-2)/3 + (g-2)/3 + (b-2)/3;
	}
	cout << max(nomixing, max(onemixing, twomixing)) << endl;

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