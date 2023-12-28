#include <bits/stdc++.h>
using namespace std;
#define ll long long
int grid[505][505];
int grid2[505][505];

int main(){
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin >> grid[i][j];
        }
    }
    vector<vector<int>> paski(2000);
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            paski[i+j].push_back(grid[i][j]);
        }
    }
    for(int i = 0; i<2000; i++){
        sort(paski[i].begin(), paski[i].end());
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin >> grid2[i][j];
        }
    }
    vector<vector<int>> paski2(2000);
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            paski2[i+j].push_back(grid2[i][j]);
        }
    }
    for(int i = 0; i<2000; i++){
        sort(paski2[i].begin(), paski2[i].end());
    }
    for(int i = 0; i<2000; i++){
        if(paski[i].empty()){
            continue;
        }
        if(paski[i] != paski2[i]){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}