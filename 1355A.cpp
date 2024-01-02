#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define FOR(i, n, m) for(int i=n; i<m; ++i)
#define ll long long


void solve(){
	ll a, k;
	cin >> a >> k;
	FOR(i,0,k-1){
		int mindigit = 10;
		int maxdigit = 0;
		string liczba = to_string(a);
		FOR(j,0,liczba.length()){
			maxdigit = max(maxdigit, liczba[j]- '0');
			mindigit = min(mindigit, liczba[j] - '0');
		}
		a += maxdigit * mindigit;
		if(mindigit == 0){
			break;
		}
	}	
	cout << a << endl;

}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}