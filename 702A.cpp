#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MAX = 10e6;

typedef pair<int, int> pi;

void solve(){
	int n;
	cin >> n;
	vector<int> input(n);
	for(int i = 0; i<n; i++){
		cin >> input[i];
	}
	int ans = 0;
	int current = 1;
	for(int i = 1;i<n; i++){
		if(input[i] > input[i-1]){
			current++;
		}
		else{
			ans = max(ans, current);
			current = 1;
		}
	}
	ans = max(ans, current);
	cout << ans << endl;
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