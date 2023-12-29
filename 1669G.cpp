#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n, m;
    cin >> n >> m;
    vector<vector<char>> input(n, vector<char>(m));
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin >> input[i][j];
        }
    }
    vector<int> bottom(m, n-1);
    for(int i = n-1; i>=0; i--){
        for(int j = 0; j<m; j++){
            if(input[i][j] == '*'){
                if(bottom[j] == i){
                    bottom[j]--;
                    continue;
                }
                input[bottom[j]][j] = '*';
                input[i][j] = '.';
                bottom[j]--;
            }
            else if(input[i][j] == 'o'){
                bottom[j] = i-1;
            }
        }
    }
    for(int i = 0; i<n; i++){
        for(int j = 0;j<m;j++){
            cout << input[i][j];
        }
        cout << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
 
}