#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
const ll MAXW = 1e5;

void solve(){
	int n;
	cin >> n;
	vector<vector<int>> grid(n, vector<int>(n));
	for(int i = 0; i<n; i++){
		string s;
		cin >> s;
		for(int j = 0; j<n; j++){
			grid[i][j] = s[j] - '0';
		}
	}
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			if(j!=n-1 && i!=n-1 && grid[i][j] == 1 && grid[i][j+1] != 1 && grid[i+1][j]!=1){
				cout << "NO" << endl;
				return;
			}
		}
	}
	cout << "YES" << endl;
	return;
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