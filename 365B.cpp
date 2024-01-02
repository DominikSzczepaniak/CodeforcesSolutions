#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define FOR(i, n, m) for(int i=n; i<m; ++i)
#define ll long long

void solve(){
	int n;
	cin >> n;
	vector<int> nums(n);
	int check = 2;
	int ans = 0;
	FOR(i,0,n){
		cin >> nums[i];
		if(i>=2){
			if(nums[i]!=nums[i-1] + nums[i-2]){
				check = 2;
			}
			else{
				check++;
			}
			ans = max(ans, check);
		}
	}
	if(n<=2){
		cout << n << endl;
		return;
	}
	cout << ans << endl;
	
}

int main(){
	solve();
	return 0;
}