#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define pi pair<int, int>
const ll MOD = 1e9 + 7;
const int MAX = 1e5;

void solve()
{
	ll n;
	cin >> n;
	if(n%2==0){
		cout << n/2 * 1 << endl;
	}
	else{
		cout << (n-1)/2*1 - n << endl;
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