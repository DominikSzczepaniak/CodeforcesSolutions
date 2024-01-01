#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
const ll MAXW = 1e15;

void solve(){
	string a;
	string b;
	cin >> a;
	cin >> b;
	int n = a.length(), m = b.length();
	int ans = 0;
	for(int dlugosc = 1; dlugosc <= min(n, m); dlugosc++){
		for(int i = 0; i+dlugosc<=n; i++){
			for(int j = 0; j+dlugosc<=m; j++){
				string one = a.substr(i, dlugosc);
				string two = b.substr(j, dlugosc);
				if(one == two){
					ans = max(ans, dlugosc);
				}
			}
		}
	}
	cout << a.length() + b.length() - 2*ans << endl;

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