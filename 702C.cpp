#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MAX = 1e6;


void solve(){
    int n, m;
	cin >> n >> m;
	vector<ll> miasta(n);
	vector<ll> wieze(m);
	for(int i = 0; i<n; i++){
		cin >> miasta[i];
	}
	for(int i = 0; i<m; i++){
		cin >> wieze[i];
	}
	ll ans = 0;
	int pointer = 0;
	for(int i = 0; i<n; i++){
		while(pointer < m-1 && abs(wieze[pointer+1]-miasta[i]) <= abs(wieze[pointer]-miasta[i])){
			pointer++;
		}
		ans = max(abs(wieze[pointer] - miasta[i]), ans);
		//cout << i << " " << pointer << endl;
	}
	cout << ans << endl;

} 
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
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