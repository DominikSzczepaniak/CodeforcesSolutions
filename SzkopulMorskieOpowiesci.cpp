// https://szkopul.edu.pl/problemset/problem/CfSEK4ACOcAPaAfX29Fp7Tud/site/?key=statement
#include <bits/stdc++.h>
#include <chrono>
#include <cstdint>
#include <thread>
using namespace std;
#define ll long long
#define pb push_back
const int MAXN = 5e3;

struct info{
    int a, b, c;
    int id;
};

bool sorting(info a, info b){
    if(a.a == b.a){
        return a.b > b.b;
    }
    else{
        return a.a > b.a;
    }
}

void solve(){ 
    int n, m, k;
    cin >> n >> m >> k;    
    vector<vector<int>> adj(n+1);
    vector<info> zapytania(k);
    vector<bool> jest(n+1, false);
    for(int i = 0; i<m; i++){
        int a, b;
        cin >> a >> b;
        jest[a] = true;
        jest[b] = true;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    for(int i = 0; i<k; i++){
        int a, b, c;
        cin >> a >> b >> c;
        zapytania[i] = {a,b,c,i};
    }
    sort(zapytania.begin(), zapytania.end(), sorting);
    vector<bool> odpowiedzi(k);
    for(int i = 1; i<=n; i++){
        if(zapytania.back().a != i){
            continue;
        }
        if(!jest[zapytania.back().a]){
            while(!jest[zapytania.back().a]){
                odpowiedzi[zapytania.back().id] = false;
                zapytania.pop_back();
                if(zapytania.size()==0){
                    break;
                }
            }
            continue;
        }
        if(zapytania.back().a == zapytania.back().b && adj[zapytania.back().a].size() == 0){
            odpowiedzi[zapytania.back().id] = false;
            zapytania.pop_back();
            continue;
        }
        int odleglosc[n+1][2];
        for(int j = 1; j<=n; j++){
            odleglosc[j][0] = odleglosc[j][1] = INT_MAX;
        }
        odleglosc[i][0] = 0;
        queue<pair<int, int>> q;
        q.push({i, 0});
        while(!q.empty()){
            int u = q.front().first;
            int v = q.front().second;
            q.pop();
            for(int j : adj[u]){
                if(odleglosc[j][v^1] == INT_MAX){
                    odleglosc[j][v^1] = odleglosc[u][v]+1;
                    q.push({j, v^1});
                }
            }
        }
        while(zapytania.back().a == i){
            int b = zapytania.back().b;
            int c = zapytania.back().c;
            if(c % 2==1){
                if(odleglosc[b][1] != INT64_MAX && odleglosc[b][1] <= c){
                    odpowiedzi[zapytania.back().id] = true;
                }
                else{
                    odpowiedzi[zapytania.back().id] = false;
                }
            }
            else{
                if(odleglosc[b][0] != INT64_MAX && odleglosc[b][0] <= c){
                    odpowiedzi[zapytania.back().id] = true;
                }
                else{
                    odpowiedzi[zapytania.back().id] = false;
                }
            }
            zapytania.pop_back();
        }
    }
    for(int i = 0; i<k; i++){
        if(!odpowiedzi[i]){
            cout << "NIE" << endl;
            continue;
        }
        cout << "TAK" << endl;
    }
}




int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    #ifdef localt
        using std::chrono::high_resolution_clock;
        using std::chrono::duration_cast;
        using std::chrono::duration;
        using std::chrono::milliseconds;
        auto t1 = high_resolution_clock::now();
        int t;
        cin >> t;
        while(t--){
            solve();
        }
        auto t2 = high_resolution_clock::now();
        duration<double, std::milli> ms_double = t2 - t1;
        cout << ms_double.count() << " ms" << endl;
    #elif local
        using std::chrono::high_resolution_clock;
        using std::chrono::duration_cast;
        using std::chrono::duration;
        using std::chrono::milliseconds;
        auto t1 = high_resolution_clock::now();
        solve();
        auto t2 = high_resolution_clock::now();
        duration<double, std::milli> ms_double = t2 - t1;
        cout << ms_double.count() << " ms" << endl;
    #else
        // int t;
        // cin >> t;
        // while(t--){
        //     solve();
        // }
        solve();
    #endif
    
    
}