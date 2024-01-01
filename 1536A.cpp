#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
const ll MAXW = 1e15;


void solve(){
	int n;
	cin >> n;
	bool no = false;
	for(int i =0;i<n;i++){
		int a;
		cin >> a;
		if(a < 0){
			no = true;
		}
	}
	if(no){
		cout << "NO" << endl;
		return;
	}
	cout << "YES" << endl;
	cout << "101" << endl;
	for(int i = 0; i<=100; i++){
		cout << i << " ";
	}
	cout << endl;
	
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