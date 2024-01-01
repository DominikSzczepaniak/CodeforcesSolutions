#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MAX = 3 * 10e5;

vector<vector<int>> adj(MAX+5);
vector<bool> visited(MAX+5);
vector<int> odl(MAX+5);
pair<int, int> najdalej ={0, 0}; //jaka odleglosc, numer wierzcholka

void dfs(int s){
	visited[s]= true;
	for(int i : adj[s]){
		if(!visited[i]){
			odl[i] = odl[s] + 1;
			if(odl[i] > najdalej.first){
				najdalej.first = odl[i];
				najdalej.second = i;
			}
			dfs(i);
		}
	}
}

int main(){
	int n;
	cin >> n;
	for(int i = 0; i<n-1; i++){
		int a,b ;
		cin >> a >> b;
		adj[a].pb(b);
		adj[b].pb(a);
	}
	odl[1] = 0;
	dfs(1);
	for(int i = 1; i<=n;i++){
		odl[i] = 0;
		visited[i] = false;
	}
	int start = najdalej.second;
	odl[start] = 0;
	najdalej = {0, 0};
	dfs(start);
	cout << najdalej.first * 3 << endl;
	return 0;
}