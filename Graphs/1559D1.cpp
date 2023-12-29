#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MAXN = 1000;
const int MOD = 1e9 + 9;

vector<vector<int>> adj1(MAXN+5);
vector<vector<int>> adj2(MAXN+5);
// vector<bool> visited1(MAXN+5);
// vector<bool> visited2(MAXN+5);
vector<int> parent1(1e6, 0);
vector<int> parent2(1e6, 0);
 
void unite(int x, int y, int id){
    if(id == 1){
        parent1[parent1[x]] = y;
    }
    else{
        parent2[parent2[x]] = y;
    }
}
int find(int v, int id){
    if(id == 1){
        if (v == parent1[v])
            return v;
        return parent1[v] = find(parent1[v], 1);
    }
    else{
        if (v == parent2[v])
            return v;
        return parent2[v] = find(parent2[v], 2);
    }
}
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int n, m1, m2;
	cin >> n >> m1 >> m2;
    for(int i = 1; i<=n; i++){
        parent1[i] = i;
        parent2[i] = i;
    }
	for(int i = 0; i<m1; i++){
        int a, b;
        cin >> a >> b;
        adj1[a].pb(b);
        adj1[b].pb(a);
        unite(a, b, 1);
	}
	for(int i = 0; i<m2; i++){
        int a, b;
        cin >> a >> b;
        adj2[a].pb(b);
        adj2[b].pb(a);
        unite(a, b, 2);
	}
	int ans = 0;
    vector<pair<int, int>> add;
	for(int i = 1; i<=n; i++){
		if(adj1[i].size() == 0 && adj2.size() == 0){
            ans++;
            add.pb({1, i});
            unite(i, 1, 1);
            unite(i, 1, 2);
        }
	}
    for(int j = 1; j<=n; j++){
        for(int i = 1; i<=n; i++){
            if(i == j){
                continue;
            }
            int p1a = find(j, 1);
            int p1b = find(i, 1);
            int p2a = find(j, 2);
            int p2b = find(i, 2);
            if(p1a != p1b && p2a != p2b){
                unite(i, j, 1);
                unite(i, j, 2);
                ans++;
                add.pb({j, i});
            }
        }
    }
	cout << ans << endl;
    for(auto u : add){
        cout << u.first << " " << u.second << endl;
    }

	return 0;
}