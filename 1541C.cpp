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
	vector<ll> input(n);
	ll MAX = 0;
	for(int i = 0; i<n; i++){
		cin >> input[i];
		MAX = max(MAX, input[i]);
	}
	sort(input.begin(), input.end());
	ll ans = -1 * input[n-1];
	// odpowiedzia jest suma roznic dla i-1 poprzednich liczb miedzy liczba na i miejscu
	ll suma = input[n-1];
	ll ile = 1;
	for(int i = n-2; i>=0; i--){
		ans += suma - (ile*input[i]);
		suma += input[i];
		ile++;
	}

	// for(int i = 0; i<n; i++){
	// 	for(int j = i-1; j>=0; j--){
	// 		ans += min((ll)0, input[j]-input[i]);
	// 	}
	// }
	
	cout << ans*-1 << endl;


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