#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
const ll MAXW = 1e5;

void solve(){
	int n;
	cin >> n;
	vector<int> input(n+1);
	for(int i = 1; i<=n; i++){
		cin >> input[i];
	}
	vector<vector<int>> DP(3, vector<int>(n+1));
	DP[0][0] = 0;
	DP[1][0] = 0;
	DP[2][0] = 0;
	for(int i = 1; i<=n; i++){
		DP[0][i] = min({DP[0][i-1], DP[1][i-1], DP[2][i-1]})+1;
		if(input[i] == 0){
			DP[1][i] = DP[1][i-1] + 1;
			DP[2][i] = DP[2][i-1] + 1;
		}
		if(input[i] == 1){
			DP[1][i] = min(DP[0][i-1], DP[2][i-1]);
			DP[2][i] = min(DP[0][i-1], DP[1][i-1])+1;
		}
		if(input[i] == 2){
			DP[1][i] = min(DP[0][i-1], DP[2][i-1])+1;
			DP[2][i] = min(DP[0][i-1], DP[1][i-1]);
		}
		if(input[i] == 3){
			DP[1][i] = min(DP[0][i-1], DP[2][i-1]);
			DP[2][i] = min(DP[0][i-1], DP[1][i-1]);
		}
	}
	cout << min(DP[0][n], min(DP[1][n], DP[2][n])) << endl;
}
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	bool testcases = false;
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