#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MAX = 10e6;

//   16 -5 -11 -15 10 5 4 -4
// 0 16 11  0  -15 -5 0 4 0

void solve(){
    int n;
    cin >> n;
    map<ll, int> nums;
    int ans = 0;
    vector<ll> sumy(n+1);
    sumy[0] = 0;
    nums[0] = 1;
	for(int i =0 ;i<n; i++){
        ll a;
        cin >> a;
        sumy[i+1] = sumy[i] + a;
        nums[sumy[i+1]]++;
        if(nums[sumy[i+1]] == 2){
            //cout << i << endl;
            ans++;
            nums.clear();
            nums[sumy[i+1]]++;
            nums[sumy[i]]++;
            //cout << sumy[i+1] << "<- dodane po nowym przedziale" << endl;
        }
    }
    // for(ll i : sumy){
    //     cout << i << " ";
    // }
    // cout << endl;
    cout << ans << endl;
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
 