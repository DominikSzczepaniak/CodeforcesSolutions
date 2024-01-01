#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MAX = 10e6;

typedef pair<int, int> pi;

void solve(){
	int n, m;
	cin >> n >> m;
	vector<int> input(n);
	vector<int> dp(n+2);
	dp[n] = 0;
	map<int, int> numery;
	for(int i = 0; i<n; i++){
		cin >> input[i];
	}
	for(int i = n-1; i>=0; i--){
		dp[i] = dp[i+1];
		numery[input[i]]++;
		if(numery[input[i]] == 1){
			dp[i]++;
		}

	}
	for(int i = 0; i<m; i++){
		int a;
		cin >> a;
		cout << dp[a-1] << endl;
	}
	
	
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
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