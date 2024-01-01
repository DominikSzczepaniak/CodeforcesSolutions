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
	vector<ll> input(n+1);
	vector<ll> suma(n+1);
	suma[0] = 0;
	for(int i = 1; i<=n; i++){
		cin >> input[i];
		suma[i] = suma[i-1] + input[i];
	}
	if(suma[n] % 3 != 0 || n<3){
		cout << 0 << endl;
		return;
	}
	ll cel = suma[n] / 3;
	vector<int> starty;
	vector<int> konce;
	for(int i = 1; i<=n-1; i++){
		if(suma[i] == cel){
			starty.pb(i);
		}
		if(suma[i] == 2*cel){
			konce.pb(i);
		}
	}
	ll ans = 0;
	for(int i = 0; i<starty.size(); i++){
		int start = 0, end = konce.size();
		while(start < end){
			int mid = (start+end)/2;
			if(konce[mid] <= starty[i]){
				start = mid+1;
			}
			else{
				end = mid;
			}
		}
		ans += konce.size() - start;
	}
	cout << ans << endl;
	// ll ans = 0;
	// for(int i = 0; i<starty.size(); i++){
	// 	for(int j = 0; j<konce.size(); j++){
	// 		if(starty[i] < konce[j]){
	// 			ans++;
	// 		}
	// 	}
	// }
	// cout << ans << endl;
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