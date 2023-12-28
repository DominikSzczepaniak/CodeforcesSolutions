#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAXN 1001
int n, m, k;
char grid[MAXN][MAXN];
int odpowiedz[100001];
int visited[MAXN][MAXN];
vector<pair<int, int>> vert = {{1, 0}, {-1, 0}, {0, 1}, {0,-1}};
int ans, number;
bool valid(int y, int x){
    if(y < 0 || y >= n){
        return false;
    }
    if(x < 0 || x >= m){
        return false;
    }
    return true;
}

void przejdz(int y, int x){
    if(!valid(y, x)){
        return;
    }
    if(grid[y][x] == '*'){
        ans++;
        return;
    }
    if(visited[y][x] != 0){
        return;
    }
    visited[y][x] = number;
    przejdz(y+1, x);
    przejdz(y-1, x);
    przejdz(y, x+1);
    przejdz(y, x-1);
    return;

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m >> k;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin >> grid[i][j];
        }
    }
    for(number = 1; number<=k; number++){
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        ans = 0;
        if(visited[a][b] == 0){
            przejdz(a, b);
        }
        else{
            ans = odpowiedz[visited[a][b]]; 
        }
        cout << ans << endl;
        odpowiedz[number] = ans;
    }
}