#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MAX = 1000000000 + 7;
 
void solve(){
	int n;
	cin >> n;
	vector<int> input(n);
	for(int i = 0;i<n; i++){
		cin >> input[i];
	}
	bool dodatnie = false;
	if(input[0] >= 0){
		dodatnie = true;
	}
	int MAXX1 = INT_MIN;
	int MAXX2 = INT_MAX;
	if(dodatnie){
		MAXX1 = input[0];
	}
	else{
		MAXX2 = input[0];
	}
	ll ans = 0;
	for(int i = 1; i<n; i++){
		if(input[i] < 0 && dodatnie){
			ans += MAXX1;
			MAXX2 = input[i];
			dodatnie = false;
		}
		else if(input[i] < 0 && !dodatnie){
			MAXX2 = max(MAXX2, input[i]);
		}
		if(input[i] >= 0 && dodatnie){
			MAXX1 = max(MAXX1, input[i]);
		} 
		else if(input[i] >= 0 && !dodatnie){
			ans += MAXX2;
			dodatnie = true;
			MAXX1 = input[i];
		}
	}
	if(!dodatnie){
		ans += MAXX2;
	}
	else{
		ans += MAXX1;
	}
	cout << ans << endl;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;	
}