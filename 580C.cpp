#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

vector<vector<int>> adj(100000+5);
vector<bool> cats(100000+5);
vector<bool> visited(100000+5);
int n, m;
int ans = 0;

void dfs(int start, int consecutive){
	visited[start] = true;
	for(auto i : adj[start]){
		if(!visited[i]){
			if(!cats[i]){
				if(consecutive <= m){
					dfs(i, 0);
				}
				else{
					
					dfs(i, consecutive+1);
				}
			}
			else{
				dfs(i, consecutive+1);
			}
		}
	}
	//cout << start << " " << consecutive << " " << cats[start] << endl;
	if(adj[start].size() == 1 && visited[adj[start][0]] && start != 1){
		if(consecutive <= m){
			//cout << start << endl;
			ans++;
		}
	}
}

int main(){
	cin >> n >> m;
	for(int i = 0; i<n; i++){
		int a;
		cin >> a;
		cats[i+1] = a;  
	}
	for(int i = 0; i<n-1; i++){
		int a, b;
		cin >> a >> b;
		adj[a].pb(b);
		adj[b].pb(a);
	}
	
	if(cats[1] == 1){
		dfs(1, 1);
	}
	else{
		dfs(1, 0);
	}
	cout << ans << endl;
	return 0;
}