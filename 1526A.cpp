#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MAX = 2 * 100000;

void solve(){
    int n;
    cin >> n;
    n *= 2;
    vector<int> input(n);
    for(int i = 0; i<n; i++){
        cin >> input[i];
    }
    sort(input.begin(), input.end());
    vector<int> ans;
    for(int i = 0; i<n/2; i++){
        ans.pb(input[n-i-1]);
        ans.pb(input[i]);
    }
    for(int i : ans){
        cout << i << " ";
    }
    cout << endl;
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