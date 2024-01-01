#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MAX = 3 * 10e5;

void solve(){
	int k;
	cin >> k;
	int d = __gcd(k, 100);
	cout << 100/d << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	
	

	return 0;	
}