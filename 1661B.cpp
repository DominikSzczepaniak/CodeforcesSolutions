#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int input[n];
    for(int i = 0; i<n; i++){
        cin >> input[i];
    }
    int iloscDwojek[32769];
    for(int i = 0; i<=32768; i++){
        int liczba = i;
        int wynik = 0;
        while(liczba % 2 == 0 && liczba != 0){
            liczba /= 2;
            wynik++;
        }
        iloscDwojek[i] = wynik;
    }
    for(int i = 0; i<n; i++){
        if(input[i] == 0 || input[i] == 32768){
            cout << 0 << " ";
            continue;
        }
        int wynik = 15;
        for(int j = 0; j<=15; j++){
            if(input[i]+j>32768){
                break;
            }
            wynik = min(j+15-iloscDwojek[input[i]+j], wynik);
        }
        cout << wynik << " ";
    }
    cout << endl;
    // z kazdej liczby w 15 krokach mozna otrzymac 0
    // jak to zmniejszac -> dodawac 1 jesli liczba jest nieparzysta lub niedaleko jest liczba ktora ma duzo dwojek w rozkladzie na czynniki


    

    return 0;
 
}