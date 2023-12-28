#include <bits/stdc++.h>
using namespace std;
#define ll long long

void algorithm(){
    int n;
    cin >> n;
    int liczby[n];
    bool zeroed[n+1];
    memset(zeroed, false, sizeof(zeroed));
    for(int i = 0; i<n; i++){
        cin >> liczby[i];
    }
    int last = 0;
    int ans = 0;
    for(int i = 1; i<n; i++){
        if(zeroed[liczby[i]]){
            liczby[i] = 0;
        }
        if(liczby[i] < liczby[i-1]){
            set<int> zero;
            for(int j = last; j<i; j++){
                zero.insert(liczby[j]);
                liczby[j] = 0;
            }
            last = i-1;
            for(int j : zero){
                if(j == 0){
                    continue;
                }
                if(!zeroed[j]){
                    ans++;
                    zeroed[j] = true;
                }
            }
        }
    }
    cout << ans << endl;


}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        // cout << "-------------------" << endl;
        algorithm();
    }
}