#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
const ll MAXW = 1e15;

void solve(){
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	int lastid = 0;
	int pierwsza = 0;
	for(int i = 0; i<n; i++){
		if(s[i] == '*'){
			pierwsza = i;
			break;
		}
	}
	s[pierwsza] = 'x';
	lastid = pierwsza;
	for(int i = 0; i<n; i++){
		for(int j = lastid+k; j>=lastid; j--){
			// cout << j << endl;
			if(s[j] == '*'){
				lastid = j;
				s[j] = 'x';
				break;
			}
		}
	}
	int ostatnia=-5;
	for(int i = n-1; i>=0; i--){
		if(s[i] == 'x'){
			break;
		}
		if(s[i] == '*'){
			ostatnia = i;
			s[i] = 'x';
			int ile = 0;
			for(int j = k; j>=1; j--){
				if(s[i-j] == 'x'){
					ile++;
				}
			}
			if(ile >= 2){
				for(int j = 1; j<=k; j++){
					if(s[i-j] == 'x'){
						s[i-j] = '*';
						ile--;
						if(ile == 1){
							break;
						}
					}
				}
			}
			break;
		}
	}
	int ans = 0;
	for(int i = 0; i<n; i++){
		if(s[i] == 'x'){
			ans++;
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