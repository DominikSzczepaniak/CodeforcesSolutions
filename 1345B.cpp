#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
const ll MAXW = 1e5;
vector<ll> DP(MAXW);

ll binary(ll num){
	int start = 0, end = MAXW;
	while(start < end){
		int mid = (start+end+1)/2;
		if(DP[mid] > num){
			end = mid-1;
		}
		else if(DP[mid] < num){
			start = mid;
		}
		else{
			return DP[mid];
		}
	}
	return DP[start];
}

void gen(){
	DP[0] = 0;
	for(int i = 1; i<=MAXW; i++){
		DP[i] = (DP[i-1]+i+i+(i-1));
	}
}

void solve(){
	ll n;
	cin >> n;
	ll ans = 0;
	while(n!=0){
		ans++;
		ll num = binary(n);
		// cout << num << endl;
		if(num == 0){
			ans--;
			break;
		}
		n-= num;
		
	}
	cout << ans << endl;
}
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	gen();
	// for(auto i : DP){
	// 	cout << i << " ";
	// }
	// cout << endl;
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