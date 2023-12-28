#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    long double n;
    cin >> n;
    ll input[int(n)];
    long double suma = 0;
    map<long double, ll> jest;
    for(ll i = 0; i<n; i++){
        cin >> input[i];
        jest[input[i]]++;
        suma += input[i];
    }
    long double srednia = suma / n;
    long double suma2 = srednia*2;
    ll wynik = 0;
    for(ll i = 0; i<n; i++){
        ll liczba = suma2-input[i];
        if(liczba == input[i]){
            if(jest[suma2-input[i]]-1 == -1){
                continue;
            }
            wynik += jest[suma2-input[i]]-1;
        }
        else{
            wynik += jest[suma2-input[i]];
        }
    }
    cout << wynik/2 << endl;

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