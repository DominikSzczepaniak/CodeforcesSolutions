#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
const ll MAXW = 1e15;

void solve(){
	int n;
	cin >> n;
	vector<ll> miners;
	vector<ll> diamonds;
	for(int i = 0; i<2*n; i++){
		ll x, y;
		cin >> x >> y;
		if(x==0){
			miners.pb(abs(y));
		}
		if(y==0){
			diamonds.pb(abs(x));
		}
	}
	sort(miners.begin(), miners.end());
	sort(diamonds.begin(), diamonds.end());
	ld ans = 0;
	for(int i = 0; i<n; i++){
		ans += sqrt( (diamonds[i] * diamonds[i]) + (miners[i]*miners[i]) );
	}
	cout << fixed << setprecision(15);
	cout << ans << endl;
}
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	bool testcases = true;
	if(testcases){
		int t;
		cin >> t;
		while(t--){
			solve();
		}
	}
	else{
		solve();
	}
	return 0;	
}