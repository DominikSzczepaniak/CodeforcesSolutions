#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define pi pair<int, int>
const ll MOD = 1e9 + 7;


void solve()
{
	// od gory na dol musza byc rowne lub mniejsze
	int n;
	cin >> n;
	vector<pi> input(n);
	for(int i = 0; i<n; i++){
		cin >> input[i].first;
		cin >> input[i].second;
	}
	sort(input.begin(), input.end());
	// for(int i = 0; i<n; i++){
	// 	cout << input[i].first << " " << input[i].second << endl;
	// }
	int ans = -1;
	for(int i = 0; i<n; i++){
		if(ans <= input[i].second){
			ans = input[i].second;
		}
		else{
			ans = input[i].first;
		}
	}
	cout << ans << endl;
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