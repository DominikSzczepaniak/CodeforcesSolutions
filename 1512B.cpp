#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve(){
    int n;
    cin >> n;
    vector<vector<char>> input(n, vector<char> (n));
    int ktory = 1;
    pair<int, int> jeden;
    pair<int, int> dwa;
    for(int i =0; i<n; i++){
        for(int j = 0; j<n; j++){
            cin >> input[i][j];
            if(input[i][j] == '*'){
                if(ktory == 1){
                    jeden = {i,j};
                    ktory++;
                }
                else{
                    dwa = {i,j};
                }
            }
        }
    }
    if(jeden.first != dwa.first && jeden.second != dwa.second){
        input[dwa.first][jeden.second] = '*';
        input[jeden.first][dwa.second] = '*';
    }
    else if(jeden.first == dwa.first){
        if(jeden.first - (abs(jeden.first-dwa.first      ) + 1 ) >= 0 && jeden.first - (abs(jeden.first-dwa.first      ) + 1 ) < n){
            input[jeden.first - (abs(jeden.first-dwa.first      ) + 1 )][jeden.second] = '*';
            input[jeden.first - (abs(jeden.first-dwa.first      ) + 1 )][dwa.second] = '*';

        }
        else{
            input[jeden.first + (abs(jeden.first-dwa.first      ) + 1 )][jeden.second] = '*';
            input[jeden.first + (abs(jeden.first-dwa.first      ) + 1 )][dwa.second] = '*';

        }
    }
    else if(jeden.second == dwa.second){
        if(jeden.second - (abs(jeden.second-dwa.second      ) + 1 ) >= 0 && jeden.second - (abs(jeden.second-dwa.second      ) + 1 ) < n){
            input[jeden.first][jeden.second - (abs(jeden.second-dwa.second      ) + 1 )] = '*';
            input[dwa.first][jeden.second - (abs(jeden.second-dwa.second      ) + 1 )] = '*';
        }
        else{
            input[jeden.first][jeden.second + (abs(jeden.second-dwa.second      ) + 1 )] = '*';
            input[dwa.first][jeden.second + (abs(jeden.second-dwa.second      ) + 1 )] = '*';
        }
    }
    
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout << input[i][j];
        }
        cout << endl;
    }

}

int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}