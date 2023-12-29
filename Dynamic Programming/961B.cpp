#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, k;
    cin >> n >> k;
    int theorem[n+1];
    int behavior[n+1];
    int sumy[n+1];
    sumy[0] = 0;
    int wynik = 0;
    for(int i = 1; i<=n; i++){
        cin >> theorem[i];
    }
    for(int i = 1; i<=n; i++){
        cin >> behavior[i];
        if(behavior[i] == 1){
            wynik += theorem[i];
            theorem[i] = 0;
        }
    }
    for(int i = 1; i<=n; i++){
        sumy[i] = sumy[i-1] + theorem[i];
    }
    int MAXW = 0;
    for(int i = 1; i<=n-k+1; i++){
        MAXW = max(MAXW, sumy[i+k-1]-sumy[i-1]);
    }
    cout << wynik + MAXW << endl;

    
    return 0;
 
}