#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MAX = 500;
vector<vector<char>> maze(MAX, vector<char>(MAX, 'A'));
vector<vector<bool>> visited(MAX, vector<bool>(MAX));
vector<pair<int, int>> vertices{{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
int odwiedzone = 0;
int s = 0;
int n,m,k;
void dfs(int y, int x){
    odwiedzone++;
    if(odwiedzone == s-k+1){
        odwiedzone = s-k;
        return;
    }
    visited[y][x] = true;
    for(int i = 0; i<4; i++){
        int pierwsza = y + vertices[i].first;
        int druga = x+vertices[i].second;
        if(pierwsza >= n || druga >= m || pierwsza < 0 || druga < 0){
            continue;
        }
        if(!visited[pierwsza][druga]){
            dfs(pierwsza, druga);
        }
    }
}

int main(){
    cin >> n>>m>>k;
    for(int i = 0; i<n; i++){
        for(int j= 0; j<m; j++){
            char a;
            cin >> a;
            if(a == '#'){
                visited[i][j] = true;
                s--;
            }
            s++;
            maze[i][j] = a;
        }
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(!visited[i][j]){
                dfs(i, j);
            }
        }
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(!visited[i][j]){
                maze[i][j] = 'X';
            }
        }
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cout << maze[i][j];
        }
        cout << endl;
    }

}