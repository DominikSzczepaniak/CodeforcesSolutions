#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

const int MAX = 3000;

void solve(){
	int n, x;
	cin >> n >> x;
	int o = 0, e = 0;
	for(int i = 0; i<n; i++){
		int a;
		cin >> a;
		if(a%2==1){
			o++;
		}
		else{
			e++;
		}
	}
	for(int i = 1; i<=min(o, x); i+=2){
		if(x - i <= e){
			cout << "YES" << endl;
			return;
		}
	}
	cout << "NO" << endl;
	
	


	
}

int main()
{
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