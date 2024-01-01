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
	vector<int> liczby(n);
	for(int i = 0; i<n; i++){
		liczby[i] = i+1;
	}
	for(int i = 0; i<n/2; i++){
		swap(liczby[2*i], liczby[2*i+1]);
	}
	if(n%2==1){
		swap(liczby[n-1], liczby[n-2]);
	}
	for(int i : liczby){
		cout << i << " ";
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