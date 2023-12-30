#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MOD = 1e8;

void solve(){
	int n;
	cin >> n;
	int ile = 0;
	vector<int> ans(n+5);
	for(int i = 2; i<=n; i++){
		if(ans[i] == 0){
			ile++;
			ans[i] += ile;
			for(int j = i; j<=n; j+=i) {
				ans[j] = ans[i];
			}
		}
		cout << ans[i] << " ";
	}
	cout << endl;

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