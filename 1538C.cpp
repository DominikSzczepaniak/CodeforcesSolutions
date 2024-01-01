#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
const ll MAXW = 1e15;

void solve(){
	ll n, l, r;
	cin >> n >>l>>r;
	vector<ll> input(n);
	for(int i = 0; i<n; i++){
		cin >> input[i];
	}
	sort(input.begin(), input.end());
	ll ans = 0;
	for(int i = 0; i<n; i++){
		ll wart = input[i];
		int start = i+1, end = n-1;
		while(start < end){
			int mid = (start+end)/2;
			if(wart + input[mid] >= l){
				end = mid;
			}
			else{
				start = mid+1;
			}
		}
		
		int id_min = start;
		start = i+1, end = n-1;
		while(start < end){
			int mid = (start+end+1)/2;
			if(wart + input[mid] <= r){
				start = mid;
			}
			else{
				end = mid-1;
			}
		}
		int id_max = end;
		// cout << i << " " << id_min << " " << id_max << endl;
		if(wart + input[id_max] < l || wart+input[id_min] > r){
			continue;
		}
		if(id_max >= i && id_min <= i){
			ans += abs(id_max-id_min);
			//cout << abs(id_max-id_min) << " dla: " << i << endl;
		}
		else{
			ans += abs(id_max-id_min+1); 
		}
	}
	cout << ans << endl;


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