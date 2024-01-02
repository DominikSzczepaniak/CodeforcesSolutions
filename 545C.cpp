#include <bits/stdc++.h>
using namespace std;
#define FOR(i, n, m) for(int i=n; i<m; ++i)
#define twodvector(nazwa, size1, size2) vector<vector<int>> nazwa( size1 , vector<int> (size2, 0))

void solve(){
	int n;
	cin >> n;
	vector<pair<int, int>> trees(n);
	FOR(i,0,n){
		int a, b;
		cin >> a >> b;
		trees[i] = make_pair(a,b);
	}
	int ans = 0;
	FOR(i,0,n){
		if(i==0 || i==n-1){
			ans++;
		}
		else{
			if(trees[i].first - trees[i].second > trees[i-1].first){
				ans++;
			}
			else if(trees[i].first + trees[i].second < trees[i+1].first){
				ans++;
				trees[i].first += trees[i].second;
			}
		}
	}
	cout << ans << endl;

	
}

int main(){
	solve();
	return 0;
}