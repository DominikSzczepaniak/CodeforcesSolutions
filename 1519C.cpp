#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

const int MAX = 1e6;


//dla dowolnego k:
//jesli ilosc uczestnikow w zespole jest podzielna przez k, to wziac cala sume, jesli nie odjac ostatnich n%k uczestnikow za pomoca sum prefiksowych (suma[n] - suma[n-n%k-1])





void solve(){
	int n;
	cin >> n;
	int input[n];
	for(int i = 0; i<n; i++){
		cin >> input[i];
		input[i]--;
	}
	vector<vector<int>> zespoly(n);
	for(int i = 0; i<n; i++){
		int a;
		cin >> a;
		zespoly[input[i]].pb(a);
	}
	for(int i = 0; i<n; i++){
		sort(zespoly[i].rbegin(), zespoly[i].rend());
	}
	vector<vector<ll>> sumy(n, vector<ll>(1, 0));
	for(int i = 0; i<n; i++){
		for(int j : zespoly[i]){
			sumy[i].pb(sumy[i].back() + j);
		}
	}
	vector<ll> ans(n);
	for(int i = 0; i<n; i++){
		for(int k = 1; k<= int(zespoly[i].size()); k++){
			if(zespoly[i].size() % k != 0){
				ll dododania = sumy[i][zespoly[i].size() - (zespoly[i].size()%k)];
				ans[k-1] += dododania;
			}
			else{
				ans[k-1] += sumy[i][zespoly[i].size()];
			}
		}
	}
	for(int i = 0; i<n;i++){
		cout << ans[i] << " ";
	}
	cout << endl;


}

int main(){
    int t;
	cin >> t;
	while(t--){
		solve();
	}

    return 0;
}