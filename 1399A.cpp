#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MAX = 100;


void solve(){
    int n;
    cin >> n;
    vector<int> input(n);
    for(int i = 0; i<n; i++){
        cin >> input[i];
    }
    sort(input.begin(), input.end());
    for(int i = 0; i<n-1; i++){
        if(abs(input[i]-input[i+1]) > 1){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
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
 