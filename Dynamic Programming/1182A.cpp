#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    if(n%2==1){
        cout << 0 << endl;
    }
    else{
        ll wynik = 1;
        n/=2;
        while(n>0){
            wynik *= 2;
            n--;
        }
        cout << wynik << endl;
    }

    return 0;
 
}