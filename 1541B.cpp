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
	vector<ll> input(n+1);
	for(int i = 1; i<=n; i++){
		cin >> input[i];
	}
	ll ans = 0;
	for(int i = 1; i<=n; i++){
		ll pierwsze_miejsce = input[i] - i;
		while(pierwsze_miejsce <= i){
			pierwsze_miejsce += input[i];
		}
		for(int j = 0; pierwsze_miejsce + (input[i] * j) <= n; j++){
			if(input[i] * input[pierwsze_miejsce + (input[i] * j)] == i + pierwsze_miejsce + (input[i] * j)){
				ans++;
			}
		}
	}
	cout << ans << endl;


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