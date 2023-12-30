#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
const ll MOD = 1e9 + 7;
const int MAX_N = 2*1e5;

vector<vector<int>> adj(MAX_N+5);
vector<int> dist(MAX_N+5);
vector<bool> visited(MAX_N+5);
vector<int> poddrzewo(MAX_N+5);

void dfs(int s){
	visited[s] = true;
	for(int i : adj[s]){
		if(!visited[i]){
			dist[i] = dist[s]+1;
			dfs(i);
		}
	}
}

int poddrzewa(int s){
	visited[s] = true;
	bool jakakolwiek = false;
	int wartosc=0;
	for(int i : adj[s]){
		if(!visited[i]){
			jakakolwiek = true;
			wartosc += poddrzewa(i);
		}
	}
	if(jakakolwiek){
		poddrzewo[s] = wartosc;
		return wartosc+1;
	}
	else{
		poddrzewo[s] = 0;
		return 1;
	}
}

void solve()
{
	//określmy jak daleko są poszczególne krawędzie i jaką wielkość ma ich poddrzewo
	//jeśli wierzchołek nie jest liściem, to na pewno jego liść był już wybrany, więc odejmiemy wartość poddrzewa przy wyborze wierzchołka
	//posortuj wierzchołki pod względem odległości i za każdym razem wybieraj najdalszy
	int n, k;
	cin >> n >> k;
	for(int i = 0; i<n-1; i++){
		int a, b;
		cin >> a >> b;
		adj[a].pb(b);
		adj[b].pb(a);
	}
	dist[1] = 0;
	dfs(1);
	for(int i = 1; i<=n; i++){
		visited[i] = false;
	}
	poddrzewa(1);
	
	// eksperymenty

	ll ans = 0;
	vector<int> wybory;
	for(int i = 1; i<=n; i++){
		wybory.pb(dist[i] - poddrzewo[i]);
		// cout << wybory.back().first << " " << wybory.back().second << endl;
	}
	sort(wybory.begin(), wybory.end());
	for(int i = 0; i<k; i++){
		ans += wybory[wybory.size()-1-i];
	}
	cout << ans << endl;


}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	bool testcases = false;
	if (testcases)
	{
		int t;
		cin >> t;
		while (t--)
		{
			solve();
		}
	}
	else
	{
		solve();
	}
	return 0;
}