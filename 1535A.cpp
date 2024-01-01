#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
const ll MAX = 60000;

void solve(){
	vector<pair<int, int>> in(4);
	int max1 = 0, max2 = 0;
	for(int i = 0; i<4; i++){
		int a;
		cin >> a;
		in[i] = {a, i};
	}
	sort(in.rbegin(), in.rend());
	if(in[0].second >= 2 && in[1].second < 2){
		cout << "YES" << endl;
		return;
	}
	else if(in[0].second < 2 && in[1].second >= 2){
		cout << "YES" << endl;
		return;
	}
	cout <<"NO" <<endl;
	
	
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