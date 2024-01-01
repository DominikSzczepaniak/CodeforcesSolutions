#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
const ll MOD = 1e9+7;

void solve()
{
	int n;
	cin >> n;
	vector<int> input(n);
	for(int i = 0; i<n; i++){
		cin >> input[i];
	}
	sort(input.begin(), input.end());
	int median1 = input[n/2];
	int median2 = input[n/2+1];
	ll ans1= 0;
	ll ans2= 0;
	// cout << median1 << " " << median2 << endl;
	for(int i = 0; i<n; i++){
		if(i == n/2){
			ans2 += abs(input[i] - median2);
			continue;
		}
		if(i == n/2+1){
			ans1 += abs(input[i] - median1);
			continue;
		}
		ans1 += abs(input[i] - median1);
		ans2 += abs(input[i] - median2);
		// cout << 
	}
	cout << min(ans1, ans2) << endl;
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