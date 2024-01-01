#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MAX = 100;


void solve(){
    int n;
    cin >> n;
    if(n%2==0){
        cout << "white" << endl;
        cout << "1 2" << endl;
    }
    else{
        cout << "black" << endl;
    }
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
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
 