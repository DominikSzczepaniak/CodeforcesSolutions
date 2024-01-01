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
	int ans = 0;
	vector<int> input(n);
	for(int i = 0; i<n; i++){
		cin >> input[i];
	}
	int last = -5;
	while(input.back() >= last){
		last = input.back();
		ans++;
		input.pop_back();
	}
	last = -5;
	for(int i = 0; i<input.size(); i++){
		if(input[i] >= last){
			last = input[i];
			ans++;
		}
		else{
			break;
		}
	}
	cout << min(n, ans) << endl;
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