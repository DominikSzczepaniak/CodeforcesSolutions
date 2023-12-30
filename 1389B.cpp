#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MAXN = 5200;

void solve(){
    int n, k, z;
    scanf("%d%d%d", &n, &k, &z);
    int input[n+1];
    int sumy[n+1];
    sumy[0] = 0;
    for(int i = 1; i<=n; i++){
        scanf("%d", &input[i]);
        sumy[i] = sumy[i-1] + input[i];
    }
    int ans = input[1];
    for(int i = 2; i<=k+1; i++){
        int ruchy_left = k+1-i;
        int suma = sumy[i];
        if(ruchy_left >= 2*z){
            int powtorki = input[i-1]*z + input[i] * z;
            int pozostale = sumy[i+(ruchy_left - 2*z)] - sumy[i]; 
            ans = max(ans, suma+powtorki+pozostale);
            // printf("Wszystkie lewa + troche prawo: %d %d %d %d %d\n", i, ans, suma, powtorki, pozostale);
        }  
        else{
            int dodaj1, dodaj2;
            if(ruchy_left%2==1){
                dodaj1 = input[i-1] * (ruchy_left/2 + 1);
                dodaj2 = input[i] * (ruchy_left/2);
            }
            else{
                dodaj1 = input[i-1] * (ruchy_left/2);
                dodaj2 =input[i] * (ruchy_left/2);
            }
            ans = max(ans, suma+dodaj1+dodaj2);
            // printf("Wszystkie lewa i tyle: %d %d %d %d\n", i, ans, dodaj1, dodaj2);
        }
        ans = max(ans, suma);
        // printf("%d %d %d %d %d\n", i, ans, suma, powtorki, pozostale);
    } 
    printf("%d\n", ans);
    
}

int main(){
    //sumy prefiksowe, sprawdz czy poprzednia wartosc * min(ile_lewo, pozostale_kroki) + wartosc obecna * te kroki ktore robilem w prawo z lewej wartosci > sumy[i+pozostale_kroki] - sumy[obecna-1]
    int t;
    scanf("%d", &t);
    while(t--){
        solve();
    }
}