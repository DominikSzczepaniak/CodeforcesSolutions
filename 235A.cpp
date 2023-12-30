#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define pi pair<int, int>
const ll MOD = 1e9+7;

ll gcd(ll a, ll b) { 
    return a==0?(b):(gcd(b % a, a)); 
}

void solve()
{
	ll n;
	cin >> n;
	if(n==1){
		cout << 1 << endl;
		return;
	}
	else if(n==2){
		cout << 2 << endl;
		return;
	}
	else if(n==3){
		cout << 6 << endl;
		return;
	}
	ll ans = 0;
	ll num = n*(n-1);
	for(ll i = n-2; i>=0; i--){
		ans = max(ans, (ll)num*i/gcd(num, i));
	}
	cout << max(ans, (n-1)*(n-2)*(n-3)) << endl;
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