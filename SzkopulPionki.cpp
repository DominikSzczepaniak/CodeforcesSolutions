//https://szkopul.edu.pl/problemset/problem/ZhrqkG9W7TYF2VPrIuR1Ufry/site/?key=statement
#include <bits/stdc++.h>
#include <chrono>
#include <thread>
#include <cstdint>
using namespace std;
#define ll long long
#define pb push_back
const int MAXN = 1e6;

void solve(){
    int n;
    int m;
    cin >> n >> m;
    char grid[n][m];
    vector<vector<int>> wyniki(n, vector<int>(m, 0));
    vector<int> sumypion(m, 0);
    vector<int> sumypoziom(n, 0);
    int ile = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            char c;
            cin >> c;
            grid[i][j] = c;
            if(c == '#'){
                sumypion[j]++;
                sumypoziom[i]++;
                ile++;
            }
        }
    }
    int wynik = INT_MAX;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(grid[i][j] == '#'){
                wyniki[i][j] = sumypion[j] + sumypoziom[i] - 1;
                wynik = min(wynik, wyniki[i][j]-1 + (ile-wyniki[i][j])*2);
            }
            else{
                wyniki[i][j] = sumypion[j] + sumypoziom[i];
                wynik = min(wynik, wyniki[i][j] + (ile-wyniki[i][j])*2);
            }
        }
    }
    cout << wynik << endl;

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