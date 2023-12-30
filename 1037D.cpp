#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MAXN = 2e5;

vector<set<int>> adj(MAXN+10);
vector<int> dist(MAXN+5);
vector<bool> visited(MAXN+5);
vector<set<int>> odleglosci(MAXN+5);
vector<bool> odlegloscdone(MAXN+5);
vector<int> sequence(MAXN+5);

void dfs(int s){
	visited[s] = true;
	for(int i : adj[s]){
		if(!visited[i]){
			dist[i] = dist[s] + 1;
			odleglosci[dist[i]].insert(i);
			dfs(i);
		}
	}
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int n;
	cin >> n;
	for(int i = 0; i<n-1; i++){
		int a, b;
		cin >> a >> b;
		adj[a].insert(b);
		adj[b].insert(a);
	}
	for(int i = 0; i<n; i++){
		cin >> sequence[i];
	}
	if(sequence[0] != 1){
		cout << "No" << endl;
		return 0;
	}
	queue<int> q;
	q.push(1);
	int id = 1;
	while(!q.empty()){
		int liczba = q.front();
		// cout << liczba << endl;
		for(int i = 0; i<adj[liczba].size(); i++){
			if(adj[liczba].count(sequence[id+i]) == 0){
				cout << "No" << endl;
				return 0;
			}
			q.push(sequence[id+i]);
			adj[sequence[id+i]].erase(liczba);
		}
		// cout << liczba << endl;
		id += adj[liczba].size();
		q.pop();
	}
	cout << "Yes" << endl;
	
	


	return 0;
}