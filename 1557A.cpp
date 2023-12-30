#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MAXN = 1000*1000;

void solve(){
	int n;
	cin >> n;
	vector<long double> input(n);
	for(int i = 0; i<n; i++){
		cin >> input[i];
	}
	sort(input.rbegin(), input.rend());
	long double ans = input[0];
	long double sum = 0;
	for(int i = 1; i<n; i++){
		sum += input[i];
	}
	sum /= (n-1);
	ans += sum;
	cout << fixed << setprecision(10);
	cout << ans << endl;

}

int main(){
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	// solve();

	return 0;
}