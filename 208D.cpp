#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back

void solve()
{
	ll n;
	cin >> n;
	vector<ll> input(n);
	for(int i = 0; i<n; i++){
		cin >> input[i];
	}
	vector<ll> prices(5);
	for(int i = 0; i<5; i++){
		cin >> prices[i];
	}
	vector<ll> ans(5, 0);
	ll kasa = 0;
	for(int i = 0; i<n; i++){
		kasa += input[i];
		for(int i = 4; i>=0; i--){
			ll ile = kasa/prices[i];
			kasa -= ile* prices[i];
			ans[i] += ile;
			// while(kasa >= prices[i]){
			// 	kasa -= prices[i];
			// 	ans[i]++;
			// }
		}
	}
	for(ll i : ans){
		cout << i << " ";
	}
	cout << endl << kasa << endl;
	
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