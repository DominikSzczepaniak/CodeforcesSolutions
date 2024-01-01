#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve(){
    int n, x;
    cin >> n >> x;
    int liczby[n];
    for(int i = 0; i<n; i++){
        cin >> liczby[i];
    }
    sort(liczby, liczby+n);
    int suma = 0;
    for(int i = 0; i<n; i++){
        suma += liczby[i];
        if(suma == x){
            if(i != n-1 && liczby[i] != liczby[n-1]){
                int a = liczby[i];
                liczby[i] = liczby[n-1];
                liczby[n-1] = a;
                break;
            }
            else{
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
    for(int i : liczby){
        cout << i << " ";
    }
    cout << endl;
    // 1, 2, 3, ..., n-1, n-2, n
    // 1 + 2 + 3 + 4 = x
    // uporzadkuj rosnaco
    // jesli dodanie kolejnej liczby bedzie rowne x, to wez ostatnia liczbe z tablicy, sprawdz czy nie jest rowna obecnej i jesli nie jest to zamien miejscami, jesli jest to odpowiedzia jest nie
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}