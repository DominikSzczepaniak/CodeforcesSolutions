#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN = 150000;
ll n, m;
bool visited[MAXN+5];
vector<ll> adj[MAXN+5];
ll id_count = 0;
ll id[MAXN+5];
void dfs(ll s, ll id_wierzcholka){
    visited[s] = true;
    id[s] = id_wierzcholka;
    for(ll i : adj[s]){
        if(!visited[i]){
            dfs(i, id_wierzcholka);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    pair<int, int> krawedzie[m];
    for(int i = 0; i<m; i++){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
        krawedzie[i] = {a, b};
    }
    for(int i = 1; i<=n; i++){
        if(!visited[i]){
            id_count++;
            dfs(i, id_count);
        }
    }
    // id ma ilosc wierzcholkow polaczonych w pomniejszym grafie
    // jesli id ma n wierzcholkow to powinno byc (n-1)*n / 2 krawedzi aby wszystkie byly polaczone.
    // przejdzmy po wszystkich krawedziach i dodajmy ilosc id?
    vector<ll> ile_krawedzi(MAXN+5, 0);
    vector<ll> id_size(MAXN+5, 0);
    for(int i = 1; i<=n; i++){
        id_size[id[i]]++;
    }
    for(int i = 0; i<m; i++){
        int startpoint = krawedzie[i].first;
        ile_krawedzi[id[startpoint]]++;
    }
    for(int i = 1; i<=id_count; i++){
        if((id_size[i]*(id_size[i]-1) / 2 != ile_krawedzi[i])){
            // cout << id_size[i] << " " << ile_krawedzi[i] << endl;
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;

    

    return 0;
}