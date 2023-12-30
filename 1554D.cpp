#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

const int MAX = 1e6;

void solve(){
	int n;
	cin >> n;
	string ans = "";
	if(n==1){
		cout << "a" << endl;
		return;
	}
	if(n%2==0){
		n /= 2;
		for(int i = 0; i<n; i++){
			ans += "a";
		}
		ans += "b";
		for(int i = 0; i<n-1; i++){
			ans += "a";
		}
	}
	else{
		n /= 2;
		for(int i = 0; i<n; i++){
			ans += "a";
		}
		ans += "b";
		for(int i = 0; i<n-1; i++){
			ans += "a";
		}
		ans += "c";
	}
	cout << ans << endl;
	
	


	
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