#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
const ll MOD = 1e9 + 7;

void solve()
{
	for(int i =0; i<8; i++){
		string s;
		cin >> s;
		if(s != "WBWBWBWB" && s != "BWBWBWBW"){
			cout << "NO" << endl;
			return;
		}
	}
	cout << "YES" << endl;


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