#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
const ll MAX = 60000;

void solve(){
	int n;
	cin >> n;
	vector<int> input(n);
	vector<int> parzyste;
	vector<int> nieparzyste;
	for(int i = 0; i<n; i++){
		cin >> input[i];
		if(input[i]%2){
			nieparzyste.pb(input[i]);
		}
		else{
			parzyste.pb(input[i]);
		}
	}
	sort(parzyste.rbegin(), parzyste.rend());
	sort(nieparzyste.rbegin(), nieparzyste.rend());
	vector<int> in;
	for(int i = 0; i<parzyste.size(); i++){
		in.pb(parzyste[i]);
	}
	for(int i = 0; i<nieparzyste.size(); i++){
		in.pb(nieparzyste[i]);
	}
	

	int ans = 0;
	for(int i = 0; i<n; i++){
		for(int j = i+1; j<n; j++){
			if(__gcd(in[i], 2*in[j]) > 1){
				ans++;
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