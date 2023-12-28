#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll powers[32];
void generateLCA(ll n, ll * parent, vector<vector<ll>> & LCA){
    for(int i = 0; i<=31; i++){
        LCA[1][i] = 0;
    }
    for(int i = 2; i<=n; i++){
        LCA[i][0] = parent[i];
    }
    for(int i = 2; i<=n; i++){
        for(int j = 1; j<=31; j++){
            LCA[i][j] = LCA[LCA[i][j-1]][j-1];
        }
    }
}

void dfs(ll s, vector<vector<pair<ll, pair<ll, ll>>>> & adj, ll * parent, ll * sumyA, ll * sumyB, ll * poziom){
    for(auto u : adj[s]){
        if(u.first != parent[s]){
            sumyA[u.first] = sumyA[parent[u.first]] + u.second.first;
            sumyB[u.first] = sumyB[parent[u.first]] + u.second.second;
            poziom[u.first] = poziom[s]+1;
            dfs(u.first, adj, parent, sumyA, sumyB, poziom);
        }
    }
}

void algorithm(){
    ll n;
    cin >> n;
    vector<vector<pair<ll, pair<ll, ll>>>> adj(n+1);
    vector<vector<ll>> LCA(n+1, vector<ll>(32));
    ll parent[n+1];
    ll poziom[n+1];
    ll sumyA[n+1];
    ll sumyB[n+1];
    poziom[1] = 0;
    sumyA[1] = 0;
    sumyB[1] = 0;
    parent[1] = 1;
    for(int i = 2; i<=n; i++){
        ll p, a, b;
        cin >> p >> a >> b;
        adj[p].push_back({i, {a, b}});
        adj[i].push_back({p, {a, b}});
        parent[i] = p;
    }
    dfs(1, adj, parent, sumyA, sumyB, poziom);
    generateLCA(n, parent, LCA);
    // wszystko dobrze do tego miejsca, zostało binary search
    //binarnie szukamy o ile isc w gore i odejmujemy od siebie wartosci sumyB[i] - sumyB[wierzcholek w binaru]
    ll r[n+1];
    for(int i = 2; i<=n; i++){
        ll start = 0, end = poziom[i];
        while(start < end){
            ll mid = (start+end)/2;
            ll wierzcholek = i;
            ll Wmid = mid;
            while(Wmid > 0){
                for(int j = 30; j>=0; j--){
                    if(powers[j]<=Wmid){
                        Wmid -= powers[j];
                        wierzcholek = LCA[wierzcholek][j];
                    }
                }
            }
            if(sumyB[wierzcholek] <= sumyA[i]){
                end = mid;
            }
            else{
                start = mid+1;
            }
        }
        r[i] = poziom[i] - start;
    }
    for(int i = 2; i<=n; i++){
        cout << r[i] << " ";
    }
    cout << endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //https://codeforces.com/problemset/problem/1714/G
    //wczytujemy drzewo z wejscia
    //robimy LCA na tym drzewie
    //zapisujemy za pomoca DFS sumy prefiksowe dla wartosci a i b w osobnej tablicy
    //dla kazdego i > 1, sprawdzamy binarnie (wynik jak najnizej w drzewie) do kiedy wartosc sumy prefiksowych b jest mniejsza od wartosci sumy prefiksowej w wierzcholku i
    //zapisujemy znalezione odpowiedzi i wyswietlamy po kolei jak prosza nas w zadaniu.
    // LCA -> O(n*log2^(n))
    // DFS -> O(n)
    // sprawdzanie binarnie -> O(n * logn)
    // LCA jest najwolniejsze, wiec zlozonosc programu bedzie w przyblizeniu zlozonoscia LCA.
    //wyszukiwanie binarne LCA za pomoca poziomow a nie wierzcholkow.
    powers[0] = 1;
    for(int i = 1; i<=30; i++){
        powers[i] = powers[i-1]*2;
    }
    int t;
    cin >> t;
    while(t--){
        algorithm();
    }
}