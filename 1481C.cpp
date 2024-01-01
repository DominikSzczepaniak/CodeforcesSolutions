#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MAX = 1e5;


void solve(){
	int n, m;
	cin >> n >> m;
	vector<int> obecny(n);
	vector<int> oczekiwany(n);
	vector<vector<int>> osc(n+1);
	for(int i = 0; i<n; i++){
		cin >> obecny[i];
	}
	for(int i = 0; i<n; i++){
		cin >> oczekiwany[i];
		if(oczekiwany[i] != obecny[i]){
			osc[oczekiwany[i]].pb(i+1);
		}
	}
	vector<int> mal(m);
	for(int i = 0; i<m; i++){
		cin >> mal[i];
	}
	int co_malowac = -5;
	if(osc[mal[m-1]].size() > 0){
		co_malowac = osc[mal[m-1]].back();
		osc[mal[m-1]].pop_back();
	}
	else{
		for(int i = 0; i<n; i++){
			if(oczekiwany[i] == mal[m-1]){
				co_malowac = i+1;
				break;
			}
		}
	}
	vector<int> odp(m);
	if(co_malowac == -5){
		cout << "NO" << endl;
		return;
	}
	else{
		odp[m-1] = co_malowac;
		for(int i = 0; i<m-1; i++){
			int a = mal[i];
			if(osc[a].size() == 0){
				odp[i] = co_malowac;
			}
			else{
				odp[i]= osc[a].back();
				osc[a].pop_back();
			}
		}
		for(int i = 1; i<=n; i++){
			if(osc[i].size() > 0){
				cout << "NO" << endl;
				return;
			}
		}
		cout <<"YES" << endl;
		for(int i=0; i<m; i++){
			cout << odp[i] << " ";
		}
		cout << endl;
	}
	
	
		

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