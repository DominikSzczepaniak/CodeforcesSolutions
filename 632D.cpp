#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN = 1e6+5;
int zliczanie[MAXN];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> input;
    for(int i = 0; i<n; i++){
        int a;
        cin >> a;
        if(a <= m){
            input.push_back({a, i+1});
        }
    }
    memset(zliczanie, 0, sizeof(zliczanie));
    for(auto i : input){
        zliczanie[i.first]++;
    }
    int dzielniki[MAXN];
    memset(dzielniki, 0, sizeof(dzielniki));
    int maxans = 0;
    int winner;
    for(int i = 1; i<=m; i++){
        if(zliczanie[i] == 0){
            continue;
        }
        for(int j = i; j<=m; j+=i){
            dzielniki[j]+=zliczanie[i];
            if(dzielniki[j] > maxans && j <= m){
                maxans = dzielniki[j];
                winner = j;
            }
        }
    }
    if(maxans == 0){
        cout << "1 0" << endl;
        cout << endl;
        return 0;
    }
    cout << winner << " " << maxans << endl;
    // cout << winner << endl;
    for(auto i : input){
        if(winner % i.first == 0){
            cout << i.second << " ";
        }
    }
    cout << endl;
    
    return 0;
 
}