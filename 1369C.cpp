#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

struct info{
	int MAX = INT_MIN;
	int MIN = INT_MAX;
};

void solve(){
	int n, k;
	cin >> n >> k;
	vector<int> input(n);
	for(int i = 0; i<n; i++){
		cin >> input[i];
	}
	sort(input.rbegin(), input.rend());
	vector<int> friends(k);
	for(int i = 0; i<k; i++){
		cin >> friends[i];
	}
	sort(friends.begin(), friends.end());
	int sum = 0;
	int licznik = 0;
	vector<info> MINMAX(k);
	for(int i = 0; i<k; i++){
		MINMAX[i].MAX = input[i];
		MINMAX[i].MIN = input[i];
		friends[i]--;
	}
	for(int i = 0; i<k; i++){
		if(friends[i] == 0){
			licznik++;
			sum = 0;
		}
	}
	for(int i = k; i<n; i++){
		// cout << i << " " << licznik << endl;
		MINMAX[licznik].MAX = max(MINMAX[licznik].MAX, input[i]);
		MINMAX[licznik].MIN = min(MINMAX[licznik].MIN, input[i]);
		sum++;
		if(sum >= friends[licznik]){
			licznik++;
			sum = 0;
		}
	}
	// for(int i = 0; i<n; i++){
	// 	MINMAX[licznik].MAX = max(MINMAX[licznik].MAX, input[i]);
	// 	MINMAX[licznik].MIN = min(MINMAX[licznik].MIN, input[i]);
	// 	MINMAX[licznik].ile++;
	// 	if(MINMAX[licznik].ile == friends[licznik]){
	// 		start++;
	// 	}
	// 	licznik++;
	// 	if(licznik == k){
	// 		licznik = start;
	// 	}
	// }
	ll ans = 0;
	for(int i = 0; i<k; i++){
		// cout << i << " " << MINMAX[i].MAX << " " << MINMAX[i].MIN << endl;
		ans += MINMAX[i].MAX + MINMAX[i].MIN;
	}
	cout << ans << endl;


}


int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}

	return 0;
}