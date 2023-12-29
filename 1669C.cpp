#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int oddodd = 0;
    int oddeven = 0;
    int evenodd = 0;
    int eveneven = 0;
    int n;
    cin >> n;
    for(int i = 1; i<=n; i++){
        int a;
        cin >> a;
        if(i%2==1){
            if(a%2==1){
                oddodd++;
            }
            else{
                oddeven++;
            }
        }
        else{
            if(a%2==1){
                evenodd++;
            }
            else{
                eveneven++;
            }
        }
    }
    if((oddodd > 0 && oddeven > 0) || (evenodd > 0 && eveneven > 0)){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
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