#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

const int MAX = 1e6;

void solve(){
	int n;
	cin >> n;
	vector<int> gregor(n);
	vector<int> enemy(n);
	for(int i = 0; i<n; i++){
		char c;
		cin >> c;
		if(c == '1'){
			enemy[i] = 1;
		}
		else{
			enemy[i] = 0;
		}
	}
	for(int i = 0; i<n; i++){
		char c;
		cin >> c;
		if(c == '1'){
			gregor[i] = 1;
		}
		else{
			gregor[i] = 0;
		}
	}
	int ans = 0;
	for(int i = 0; i<n; i++){
		if(gregor[i] == 1 && enemy[i]==0){
			ans++;
			gregor[i] = 0;
		}
	}
	// od lewej
	int ans1 =0;
	int ans2= 0;
	vector<int> enemy2 = enemy;
	for(int i = 0; i<n; i++){
		if(gregor[i] == 0){
			continue;
		}
		if(i>0){
			if(enemy[i-1] == 1){
				ans1++;
				enemy[i-1] = 0;
				continue;
			}
		}
		if(i<n-1){
			if(enemy[i+1] == 1){
				ans1++;
				enemy[i+1] = 0;
				continue;
			}
		}
	}
	//od prawej
	for(int i = n-1; i>=0; i--){
		if(gregor[i] == 0){
			continue;
		}
		if(i<n-1){
			if(enemy[i+1] == 1){
				ans2++;
				enemy2[i+1] = 0;
				continue;
			}
		}
		if(i>0){
			if(enemy[i-1] == 1){
				ans2++;
				enemy2[i-1] = 0;
				continue;
			}
		}
	}
	// cout << ans << endl;
	// cout << ans1 << " " << ans2 << endl;
	cout << ans + max(ans1, ans2) << endl;
	// cout << ans << endl;
	
	
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	// solve();
	return 0;
}