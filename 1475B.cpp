#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MAX = 10e6;

typedef pair<int, int> pi;
vector<bool> can(MAX+5);
void generate(){
	can[2020] = true;
	can[2021] = true;
	for(int i = 2022; i<=MAX; i++){
		if(can[i-2020]){
			can[i] = true;
		}
		if(can[i-2021]){
			can[i] = true;
		}
	}
}
void solve(){
	int n;
	cin >> n;
	if(can[n]){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	generate();
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