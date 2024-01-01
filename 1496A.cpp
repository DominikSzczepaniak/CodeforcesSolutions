#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
const ll MAXW = 1e15;

bool palindrom(string s){
	int n = s.length();
	for(int i = 0; i<n/2; i++){
		if(s[i] != s[n-i-1]){
			return false;
		}
	}
	return true;
}

void solve(){
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	if(2*k==n){
		cout << "NO" << endl;
		return;
	}
	string check = s.substr(0, k) + s.substr(n-k, n+1);
	if(k== 0 || palindrom(check)  ){
		cout << "YES" << endl;
		return;
	}
	cout << "NO" << endl;
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