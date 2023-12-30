#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve(){
	int n, x;
	cin >> n >> x;
	int nietakisam = 0;
	int takisam = 0;
	int suma = 0;
	for(int i = 0; i<n; i++){
		int a;
		cin >> a;
		if(a == x){
			takisam++;
		}
		else{
			nietakisam++;
		}
		suma += a;
	}
	if(nietakisam == 0){
		cout << 0 << endl;
	}
	else{
		if(takisam == 0){
			if(suma == n*x){
				cout << 1 << endl;
			}
			else{
				cout << 2 << endl;
			}
		}
		else{
			cout << 1 << endl;
		}
	}
}

int main(){
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--){
		solve();
	}


	return 0;
}