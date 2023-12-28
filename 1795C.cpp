#include <iostream>
#include <vector>
#include <stdio.h>
#include <cstring>
using namespace std;

void solve(){
    long long int n;
    cin >> n;
    long long int a[n+5];
    long long int b[n+5];
    long long int suma_koncowa[n+5];
    long long int multiplication[n+5];
    memset(suma_koncowa, 0, sizeof(suma_koncowa));
    memset(multiplication, 0, sizeof(multiplication));
    for(int i = 1; i<=n; i++){
        cin >>a[i];
    }
    for (int i = 1; i <= n; ++i) {
        cin >> b[i];
    }
    long long int sumy[n+1];
    sumy[0] = 0;
    for (int i = 1; i <= n; ++i) {
        sumy[i] = sumy[i-1] + b[i];
    }
    for(int i = 1; i<=n; i++){
        long long int wartosc = a[i];
        long long int start = i, end = n; //szukam miejsce w ktorym chce zakonczyc czyli max_prawy
        while(start < end) {
            long long int mid = (start + end + 1) / 2;
            long long int poprzednie_miejsce = mid - 1;
            if (sumy[poprzednie_miejsce] - sumy[i - 1] < wartosc) {
                start = mid;
            } else {
                end = mid-1;
            }
        }
        long long int max_rozszerzenie = start;
        if(max_rozszerzenie == i){
            if(a[i] > b[i]){
                suma_koncowa[i] += b[i];
            }
            else{
                suma_koncowa[i] += a[i];
            }
        }
        else{
            long long int suma_do_poprzedniego = sumy[max_rozszerzenie-1] - sumy[i-1];
            long long int pozostala_wartosc = a[i] - suma_do_poprzedniego; //wartosc sumy ktora dostanie ostatni punkt
            if(pozostala_wartosc <= b[max_rozszerzenie]){
                suma_koncowa[max_rozszerzenie] += pozostala_wartosc;
            }
            else{
                suma_koncowa[max_rozszerzenie] += b[max_rozszerzenie];
            }
            multiplication[max_rozszerzenie] -= 1;
            multiplication[i] += 1;
        }
    }
    long long int val = 0;
    for (int i = 1; i <= n; ++i) {
        val += multiplication[i];
        long long int wynik = val * b[i] + suma_koncowa[i];
        cout << wynik << " ";
    }
    cout << endl;



}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}