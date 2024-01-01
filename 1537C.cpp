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
	if(n==2){
		cout << input[0] << " " << input[1] << endl;
		return;
	}
	int najmniejsza = INT_MAX;
	int l1;
	for(int i = 1; i<n; i++){
		if(abs(input[i]- input[i-1]) < najmniejsza){
			najmniejsza = abs(input[i] - input[i-1]);
			l1 = i;
		}
	}
	for(int i = l1; i<n; i++){
		cout << input[i] << " ";
	}
	for(int i = 0; i<l1; i++){
		cout << input[i] << " ";
	}
	cout << endl;



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