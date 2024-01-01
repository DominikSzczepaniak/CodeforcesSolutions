#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
const ll MAXW = 1e15;

void solve(){
	int n;
	cin >> n;
	vector<int> input(n);
	int id1 = 0;
	int id2 = 0;
	for(int i = 0; i<n; i++){
		cin >> input[i];
		if(input[i] == n){
			id2 = i;
		}
		if(input[i]==1){
			id1 = i;
		}
	}
	int odl_do_lewego = min(id1+1, n-id1);
	int odl_do_prawego = min(id2+1, n-id2);
	int ans = 0;
	if(odl_do_lewego<odl_do_prawego){
		// cout << odl_do_lewego << " asdasdasd" <<endl;
		ans += odl_do_lewego;
		// if(id1 < n/2){
		// 	ans += min(abs(id1-id2), n-id2+1);
		// }
		// else{
		// 	ans += min(abs(id1-id2), id2+1);
		// }
		// cout << min(abs(id2-id1), min( id2+1,n-id2)) << " bbbbbbb" << endl;
		ans += min(abs(id2-id1), min( id2+1,n-id2));
	}
	else{
		// cout << odl_do_prawego << " asdasdasd" << endl;
		// cout << min(abs(id2-id1), min( id1+1,n-id1)) << " bbbb" << endl;
		ans += odl_do_prawego;
		ans += min(abs(id2-id1), min( id1+1,n-id1));
	}
	cout << ans << endl;
	// bool nowa = false;
	// vector<int> druga;
	// int ans = 0;
	// if(id1+1 <= n-id1){
	// 	ans += id1+1;
	// 	for(int i = id1+1; i<n; i++){
	// 		druga.pb(input[i]);
	// 	}
	// 	// cout << ans << endl;
	// }
	// else{
	// 	ans += n-1-id1+1;
	// 	for(int i = 0; i<=n-1-id1-1; i++){
	// 		druga.pb(input[i]);
	// 	}
	// }
	// cout << ans << endl;
	// int less = 0;
	// for(int i = 0; i<druga.size(); i++){
	// 	if(druga[i] == n){
	// 		less = i;
	// 		break;
	// 	}
	// }
	// for(int i = 0; i<druga.size(); i++){
	// 	if(druga[druga.size()-1-i] == n){
	// 		less = min(less, i);
	// 		break;
	// 	}
	// }
	// ans += less+1;
	//  cout << ans << endl;



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