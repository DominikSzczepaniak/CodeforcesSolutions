#include <bits/stdc++.h>
using namespace std;
#define ll long long
 

int main() 
{ 
    // freopen("cardgame.in", "r", stdin);
    // freopen("cardgame.out", "w", stdout);
    int n, x;
    cin >> n >> x;
    vector<int> books(n);
    vector<int> sumy(n+1);
    sumy[0] = 0;
    for(int i = 0; i<n; i++){
        cin >> books[i];
        sumy[i+1] = sumy[i]+books[i];
    }
    int start = 1, koniec = start;
    int ans = 0;
    while(koniec <= n){
        if(sumy[koniec] - sumy[start-1] > x){
            start++;
        }
        else if(sumy[koniec] - sumy[start-1] < x){
            ans = max(ans, koniec-start+1);
            koniec++;
        }
        else{
            ans = max(ans, koniec-start+1);
            start++;
        }
    }
    cout << ans << endl;
    return 0; 
} 