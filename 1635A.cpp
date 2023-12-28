#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int liczby[n];
        for(int i = 0; i<n; i++){
            cin >> liczby[i]; 
        }
        int wynik = liczby[0];
        for(int i = 1; i<n; i++){
            wynik = (wynik | liczby[i]);
        }
        cout << wynik << endl;

    }
}