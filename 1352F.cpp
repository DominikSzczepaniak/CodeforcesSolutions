#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve(){
	int a, b, c;
	cin >> a >> b >> c;
	string ans = "";
	if(a>0){
		ans += "00";
		a--;
		while(a>0){
			ans += "0";
			a--;
		}
	}
	if(c>0){
		if(ans.back() == '0'){
			b--;
		}
		ans += "11";
		c--;
		while(c>0){
			ans += "1";
			c--;
		}
	}
	while(b>0){
		if(ans.length() == 0){
			ans += "01";
			b--;
			continue;
		}
		if(ans.back() == '0'){
			ans += "1";
			b--;
		}
		else{
			ans += "0";
			b--;
		}
	}
	cout << ans << endl;
}

int main(){
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--){
		solve();
	}


	return 0;
}