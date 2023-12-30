#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MOD = 1e8;

void solve(){
	int n, m;
	cin >> n >> m;
	vector<int> a(n);
	vector<int> b(m);
	for(int i = 0; i<n; i++){
		cin >> a[i];
	}
	for(int i = 0; i<m; i++){
		cin >> b[i];
	}
	for(int i = 0; i<n; i++){
		for(int j = 0; j<m; j++){
			if(a[i] == b[j]){
				cout << "YES" << endl;
				cout << 1 << " " << a[i] << endl;
				return;
			}
		}
	}
	cout << "NO" << endl;

}

int main(){
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--){
		solve();
	}

	return 0;
}