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
	ll sum = 0;
	for(int i = 0; i<n; i++){
		cin >> input[i];
		sum += input[i];
	}
	int ile = 0;
	if(sum < n){
		ile = 1;
	}
	else if(sum > n){
		ile = sum - n;
	}
	else{
		ile = 0;
	}
	cout << ile << endl;


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