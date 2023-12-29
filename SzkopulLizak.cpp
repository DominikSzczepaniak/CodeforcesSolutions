//https://szkopul.edu.pl/problemset/problem/AWhdD7i4V7mupdKWVtpgfGSM/site/?key=statement
#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int MAXW = 2e6;
const int MAXN = 1e6;
int wejscie[MAXN+1];

void zapamietaj(int l, int r, int w, pair<int, int> *wartosci){
    if(wartosci[w].first != 0){
        return;
    }
    wartosci[w] = {l, r};
    if(w >= 3){
        if(wejscie[l] == 2){
            zapamietaj(l+1, r, w-2, wartosci);
        }
        else if(wejscie[r] == 2){
            zapamietaj(l, r-1, w-2, wartosci);
        }
        else{
            zapamietaj(l+1, r-1, w-2, wartosci);
        }
        // if(wejscie[l] == 1){
        //     zapamietaj(l+1, r, w-1, wartosci);
        // }
        // if(wejscie[r] == 1){
        //     zapamietaj(l, r-1, w-1, wartosci);
        // }
    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    int suma = 0;
    for(int i = 1; i<=n; i++){
        char c;
        cin >> c;
        if(c == 'T'){
            wejscie[i] = 2;
        }
        else{
            wejscie[i] = 1;
        }
        suma += wejscie[i];
    }
    pair<int, int> wartosci[suma+1];
    zapamietaj(1, n, suma, wartosci);
    for(int i = 1; i<=n; i++){
        if(wejscie[i] == 1){
            int suma1 = 0;
            int suma2 = 0;
            for(int k = 1; k<=i; k++){
                suma1 += wejscie[k];
            }
            suma2 = suma1;
            for(int k = i+1; k<=n; k++){
                suma2 += wejscie[k];
            }
            zapamietaj(i+1, n, suma2-suma1, wartosci);
            break;
        }
        if(wejscie[n-i+1] == 1){
            int suma1 = 0;
            for(int k = 1; k<=n-1; k++){
                suma1 += wejscie[k];
            }
            zapamietaj(1, n-i, suma1, wartosci);
            break;
        }
    }

    int l = -1, r = -1;
    for(int i = 1; i<=n; i++){
        if(wejscie[i] == 1){
            if(l = -1){
                l = i;
            }
            r = i;
        }
    }
    if(l != -1 && r-1 < n-l){
        zapamietaj(l+1, n, suma - 2* (l-1)-1, wartosci);
    }
    else if(r != -1){
        zapamietaj(1, r-1, suma - 2*(n-r)-1, wartosci);
    }
    for(int i = 0; i<m; i++){
        int a;
        cin >> a;
        if(a > suma){
            cout << "NIE" << endl;
        }
        else{
            if(wartosci[a].first == 0){
                cout << "NIE" << endl;
            }
            else{
                cout << wartosci[a].first << " " << wartosci[a].second << endl;
            }
        }
    }


}