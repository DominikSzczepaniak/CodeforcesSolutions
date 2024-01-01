#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

const int MAX = 1e6;

void generate(int n, int m){

}

void solve(){
	int n, m, k;
	cin >> n >> m >> k;
	vector<vector<int>> plansza(n+1, vector<int>(m+1));
	plansza[1][1] = 0;
	for(int i = 1; i<=n; i++){
		for(int j = 1; j<=m; j++){
			if(i==1&&j==1){
				continue;
			}
			else{
				plansza[i][j] = min(plansza[i-1][j]+j, plansza[i][j-1]+i);
			}
		}
	}
	// for(int i = 1; i<=n; i++){
	// 	for(int j = 1; j<=m; j++){
	// 		cout << plansza[i][j]<<" ";
	// 	}
	// 	cout << endl;
	// }
	if(plansza[n][m] == k){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
}

int main(){
    int t;
	cin >> t;
	while(t--){
		solve();
	}

    return 0;
}