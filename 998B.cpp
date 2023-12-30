#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define pi pair<int, int>
const ll MOD = 1e9+7;

void solve()
{
	int n, b;
	cin >> n >> b;
	vector<int> input(n);
	for(int i = 0; i<n; i++){
		cin >> input[i];
	}
	int e = 0, o = 0;
	vector<int> koszty;
	for(int i = 0; i<n; i++){
		if(input[i]%2==1){
			o++;
		}
		else{
			e++;
		}
		if(i == 0 || i == n-1){
			continue;
		}
		if(e == o && e!=0 && o!= 0){
			// cout << i << " " << e  << " " << o << " " << abs(input[i]-input[i+1]) <<  endl;
			koszty.pb(abs(input[i]-input[i+1]) );
			e=0;
			o=0;
		}
	}
	sort(koszty.begin(), koszty.end());
	// for(int i : koszty){
	// 	cout << i << " ";
	// }
	// cout << endl;
	int ans = 0;
	for(int i = 0; i<koszty.size(); i++){
		if(b - koszty[i] >= 0) {
			b-= koszty[i];
			ans++;
		}
	}
	cout << ans << endl;


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