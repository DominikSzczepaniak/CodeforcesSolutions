#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define pi pair<int, int>
const ll MOD = 1e9+7;

void solve()
{
	int v;
	cin >> v;
	vector<int> ceny(9);
	pair<int, int> MIN = {INT_MAX, -5000};
	for(int i = 1; i<=9; i++){
		int a;
		cin >> a;
		ceny[i] = a;
		if(MIN.first > a || (MIN.second < i && MIN.first == a)){
			MIN = {a, i};
		}
	}
	if(v < MIN.first){
		cout << -1 << endl;
		return;
	}
	vector<int> ans;
	// cout << v << endl;
	// cout << MIN.first << endl;
	int ile_razy = (v / MIN.first);
	for(int i = 0; i<ile_razy; i++){
		ans.pb(MIN.second);
	}
	v -= MIN.first * ile_razy;
	for(int i = 0; i<ans.size(); i++){
		for(int j = 9; j >= 1; j--){
			if(ceny[ans[i]] + v >= ceny[j]){
				v = ceny[ans[i]] + v - ceny[j];
				ans[i] = j;
				break;
			}
		}
	}
	for(int i = 0; i<ans.size(); i++){
		cout << ans[i];
	}
	cout <<endl;

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