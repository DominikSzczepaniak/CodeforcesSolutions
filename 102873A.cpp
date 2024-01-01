#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
const ll MOD = 1e9+7;

void solve()
{
	int n, k;
	cin >> n >> k;
	vector<bool> nums(n+1);
	for(int i = 0; i<k; i++){
		int a;
		cin >> a;
		nums[a] = true;
	}
	int ile = 0;
	for(int i = 1; i<=n; i++){
		if(!nums[i]){
			ile++;
		}
	}
	if(ile != 1){
		cout << "NO" << endl;
	}
	else{
		cout << "YES" << endl;
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