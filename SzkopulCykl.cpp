// https://szkopul.edu.pl/problemset/problem/-xO_ABE0lLfiSnSd7Mvvrblx/site/?key=statement
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MAX = 100;
const ll MAXW = 100000000000000;

vector<vector<ll>> DP(MAX+1, vector<ll>(MAX+1, -1*MAXW)); 
vector<vector<ll>> adj(MAX+1);
vector<vector<ll>> w(MAX+1, vector<ll>(MAX+1)); //tablica z wartosciami edge
vector<vector<ll>> przodkowie(MAX+1);
vector<ll> M(MAX+1, MAXW); //wyniki


void solve(){
	int n,m;
	cin >> n >> m;
	for(int i = 0; i<m; i++){
		ll a, b, c;
		cin >> a >> b >> c;
		przodkowie[b].pb(a);
		adj[a].pb(b);
		w[a][b] = c*10000; 
	}
	int start_node = 1;
	DP[0][start_node] = 0;
	// ----------------------

	for(int k = 1; k<=n; k++){
		for(int i = 1; i<=n; i++){
			//dla kazdego przodka u:
			for(int u : przodkowie[i]){
				if(DP[k][i] < DP[k-1][u] + w[u][i]){
					DP[k][i] = DP[k-1][u] + w[u][i];
				}
			}
		}
	}
	ll wynik = -1 * MAXW;
	for(int v = 1; v<=n; v++){
		for(int k = 0; k<=n-1; k++){
			M[v] = min(M[v], (DP[n][v] - DP[k][v]) / (n-k));
		}
		wynik = max(wynik, M[v]);
	}
	long double ans = wynik;
	string s = to_string(wynik);
	double last = s[s.length()-1] - '0';
	if(last >= 5){
		last = 0.0001;
	}
	else{
		last = 0;
	}
	cout << fixed << setprecision(4) <<   ans/10000 + last << endl;
}


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	bool testcases = false;
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