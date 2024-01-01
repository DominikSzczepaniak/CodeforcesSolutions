#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
const ll MAXW = 1e15;

void solve(){
	int n, m, x, y;
	cin >> n >> m >> x >> y;
	vector<vector<char>> grid(n, vector<char>(m));
	for(int i = 0; i<n; i++){
		for(int j = 0; j<m; j++){
			cin >> grid[i][j];
		}
	}
	int ans = 0;
	for(int i = 0; i<n; i++){
		for(int j = 0; j<m; j++){
			if(j!= m-1 && grid[i][j] == '.' && grid[i][j+1] == '.'){
				if(2*x<=y){
					ans += 2*x;
				}
				else{
					ans += y;
				}
				j++;
			}
			else if(grid[i][j] == '.'){
				ans += x;
			}
		}
	}
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