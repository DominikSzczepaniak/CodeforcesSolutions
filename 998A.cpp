#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define FOR(i, n, m) for(int i=n; i<m; ++i)
#define ll long long

void solve(){
	int n;
	cin >> n;
	int balony[n];
	int sum = 0;
	for(int i = 0; i<n; i++){
		cin >> balony[i];
		sum += balony[i];
	}
	bool y = false;
	if(n == 1 || (n ==2 && balony[0] == balony[1]) ){
		cout << -1 << endl;
		return;
	}
	
	else{
		for(int i = 0; i<n; i++){
			if(balony[i]*2 != sum ){
				cout << 1 << endl;
				cout << i+1 << endl;
				y = true;
				break;
			}
		}
	}
	if(y == false){
		cout << -1 << endl;
	}
}



int main(){
	solve();
	return 0;
}