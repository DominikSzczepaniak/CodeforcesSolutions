#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define pi pair<int, int>
const ll MOD = 1e9+7;

struct wejscie{
	ll a;
	ll b;
};

bool comparator(wejscie jeden, wejscie dwa){
	return jeden.b < dwa.b;
}

void solve()
{
	ll n, r, avg;
	cin >> n >> r >> avg;
	vector<wejscie> input(n);
	ll sum = 0;
	ll expected = avg*n;
	for(int i = 0; i<n; i++){
		ll a, b;
		cin >> a >> b;
		input[i] = {a, b};
		sum += a;
	}
	ll missing = max((ll)0, expected - sum);
	sort(input.begin(), input.end(), comparator);
	ll ans = 0;
	for(int i = 0; i<n; i++){
		if(r - input[i].a <= missing){
			ans += input[i].b * (r-input[i].a);
			missing -= r-input[i].a;
		}
		else{
			ans += missing*input[i].b;
			missing = 0;
		}
	}
	cout << ans << endl;
	// cout << endl;

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