#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main(){
	int n;
	cin >> n;
	map<int, int> liczby;
	int najwieksza = 0;
	for(int i = 0; i<n; i++){
		int a;
		cin >> a;
		najwieksza = max(a, najwieksza);
		liczby[a]++;
	}
	vector<ll> DP(najwieksza+1);
	DP[0] = 0;
	DP[1] = liczby[1] * 1;
	ll ans = 0;
	for(int i = 2; i<= najwieksza; i++){
		if(liczby[i-1] == 0){
			DP[i] = max(DP[i-1] + ((ll)i * (ll)liczby[i]), DP[i]);
		}
		if(i>=3){
			DP[i-2] = max(DP[i-3], DP[i-2]);
		}
		DP[i] = max(DP[i-2] + ((ll)i*(ll)liczby[i]) , DP[i]);
		ans = max(ans, DP[i]);
	}
	// for(int i = 0; i<=najwieksza; i++){
	// 	cout << DP[i] << " ";
	// }
	// cout << endl;
	cout << ans << endl;
	return 0;
}