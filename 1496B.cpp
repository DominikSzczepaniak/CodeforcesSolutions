#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
const ll MAXW = 1e15;

void solve(){
	int n, k;
	cin >> n >> k;
	set<int> input;
	int MAX = 0;
	for(int i = 0; i<n; i++){
		int a;
		cin >> a;
		input.insert(a);
		MAX = max(MAX, a);
	}
	int MEX;
	for(int i = 0; i<=n+1; i++){
		if(input.count(i) == 0){
			MEX = i;
			break;
		}
	}
	if(k==0){
		cout << n << endl;
		return;
	}
	if(MEX == MAX +1){
		cout << n+k << endl;
		return;
	}
	else{
		if(input.count( ceil(((double)MAX + (double)MEX) / 2) ) == 1){
			cout << n << endl;
			return;
		}
		else{
			cout << n+min(1, k)<< endl;
		}
	}
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