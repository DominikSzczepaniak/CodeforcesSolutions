#include <bits/stdc++.h>
using namespace std;
#define ll long long

// Bierzemy n-tą liczbę do pary z n-k liczbą i tak dalej

// 1 1 1 1 1 2 3
// K = 3
// 1 1 1 1 1 2 3
// 	^.      ^
//         1       1
// 1 1 1 1 1 2 3
//      ^      ^
//      2      2

// …
// Skad wiemy ze to najlepsze rozwiazanie?
// Wiemy ze zawsze chcemy pozbyć się najwiekszych liczb. Wiemy tez ze możemy się pozbyć 2*k najwiekszych liczb. Najwieksza szanse na to, ze 2 liczby będą różne od 1 są wtedy gdy są odlegle od siebie o k. Jeśli wzięlibyśmy liczby 1, 2*k, 2 z 2*k-1 itd. to ostatnia liczba byłyby 2 sąsiednie liczby, które mogą być takie same jak w przykładzie:
// 1 3 3 7
// Jeśli dwie liczby oddalone o k byłyby takie same to i tak nie można byłoby ich usunąć lepiej, bo inna para liczb wyglądałaby tak samo.


void solve(){
    int n, k;
    cin >> n >> k;
    int input[n];
    for(int i = 0; i<n; i++){
        cin >> input[i];
    }
    sort(input, input+n);
    int wynik = 0;
    if(k>0){
        for(int i = n-1; i>=n-k; i--){
            wynik += input[i-k]/input[i];
        }
    }
    for(int i = n-2*k-1; i>=0; i--){
        wynik += input[i];
    }
    cout << wynik << endl;

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