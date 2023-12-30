#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
	string s;
	cin >> s;
	int n = s.length();
	int ones = 0, zeros = 0;
	for(int i = 0; i<n; i++){
		if(s[i] == '0'){
			zeros++;
		}
		else{
			ones++;
		}
	}
	//od lewej do prawej 1
	// od prawej do lewej 1
	int ans = INT_MAX;
	// int ans = min(ones-1, zeros-1);
	int lewe1 = 0, lewe0 = ones; //jedynki maja byc z lewej strony, 0 z prawej
	int leweop=0, praweop = 0;
	int prawe1 = zeros, prawe0 = 0; //zera maja byc z lewej strony, 1 z prawej
	for(int i = 0; i<n; i++){
		if(s[i] == '0'){
			lewe1++;
			prawe1--;
		}
		if(s[i] == '1'){
			lewe0--;
			prawe0++;
		}
		// cout << i << " " << lewe1 << " " << lewe0 << endl;
		// cout << i << " " << prawe1 << " " << prawe0 << endl;
		ans = min(lewe1 + lewe0, ans);
		ans = min(prawe0 + prawe1, ans);
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

	
	return 0;
}