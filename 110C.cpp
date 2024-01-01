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
	int n;
	cin >> n;
	int ans4 = 0;
	int ans7 = 0;
	while(n>0){
		if(n%7==0){
			ans7 += n/7;
			n = 0;
		}
		else{
			if(n >= 4){
				ans4 += 1;
				n-=4;
			}
			else{
				cout << -1 << endl;
				return;
			}
		}
	}
	for(int i = 0; i<ans4; i++){
		cout << 4;
	}
	while(ans7--){
		cout<< 7;
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