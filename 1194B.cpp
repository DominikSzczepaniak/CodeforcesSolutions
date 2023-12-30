#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back


void solve(){
	int n, m;
	cin >> n >> m;
	vector<vector<char>> input(n, vector<char>(m));
	vector<int> piony(m);
	vector<int> poziomy(n);
	for(int i = 0; i<n; i++){
		for(int j = 0; j<m;j++){
			cin >> input[i][j];
		}
	}
	int MINPION = INT_MAX, MINPOZIOM = INT_MAX;
	int idpion, idpoziom;
	for(int i = 0; i<n; i++){
		int poziom = 0;
		for(int j = 0; j<m; j++){
			if(input[i][j] == '.'){
				poziom++;
			}
		}
		poziomy[i] = poziom;
	}
	for(int i = 0; i<m; i++){
		int pion = 0;
		for(int j = 0; j<n; j++){
			if(input[j][i] == '.'){
				pion++;
			}
		}
		piony[i] = pion;
	}
	int ans = INT_MAX;
	for(int i = 0; i<n; i++){
		for(int j = 0; j<m; j++){
			if(input[i][j] == '.'){
				ans = min(ans, piony[j] + poziomy[i] - 1);
			}
			else{
				ans = min(ans, piony[j] + poziomy[i]);
			}
		}
	}
	cout << ans << endl;
	



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