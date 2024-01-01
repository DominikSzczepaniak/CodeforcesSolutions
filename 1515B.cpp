#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

bool toPower(int a){
    int pie = sqrt(a);
    return pie*pie==a;
}

void solve(int a){
    if(a%2==1){
        cout << "NO" << endl;
        return;
    }
    else{
        if((toPower(a/4) && (a/4 * 4 == a)) || (toPower(a/2) && a/2 * 2 == a)){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
    return;
}

int main(){
    //jesli obecna liczba ma postac 2x lub 4x gdzie x jest jakas liczba do potegi drugiej
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        solve(a);
    }
    return 0;
}