#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define endl '\n'
const int MOD = 1e8;

void solve(){
	int n, m, k;
	cin >> n >> m >> k;
	vector<ll> input(n+1);
	vector<ll> sumy(n+1);
	sumy[0] = 0;
	for(int i = 1; i<=n; i++){
		cin >> input[i];
		sumy[i] = sumy[i-1] + input[i];
	}
	ll DP[k+1][n+1];
	memset(DP, 0, sizeof(DP));
	vector<ll> wyniki(n+1);
	for(int i = 1; i<=n-m+1; i++){
		wyniki[i] = sumy[i+m-1] - sumy[i-1];
		DP[1][i] = wyniki[i];
	}
	for(int i = 2; i<=k; i++){
		int start = m*(i-1)+1;
		// cout << i << " " << start << " "<< DP[i-1][start] <<  endl;
		ll MAXEL = INT_MIN;
		for(int j = start; j<=n; j++){
			MAXEL = max(MAXEL, DP[i-1][j-m]);
			DP[i][j] = MAXEL + wyniki[j];
		}
	}
	// for(int i = 1; i<=k; i++){
	// 	for(int j = 1; j<=n; j++){
	// 		cout << DP[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }
	ll ans = 0;
	for(int i = 1; i<=n; i++){
		ans = max(ans, DP[k][i]);
	}
	cout << ans << endl;
	

}

int main(){
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	// int t;
	// cin >> t;
	// while(t--){
	// 	solve();
	// }
	solve();

	return 0;
}