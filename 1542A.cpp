#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define pi pair<int, int>
const ll MOD = 1e9+7;

void solve()
{
	int n;
	cin >> n;
	vector<int> input(2*n);
	int niep = 0, parz = 0;
	for(int i = 0; i<2*n; i++){
		cin >> input[i];
		if(input[i]%2==0){
			parz++;
		}
		else{
			niep++;
		}
	}
	if(niep == parz){
		cout << "Yes" << endl;
	}
	else{
		cout << "No" << endl;
	}


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