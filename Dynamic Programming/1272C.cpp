#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // stan bazowy: 0, dopoki pierwsza wystepujaca litera z dozwolonych - tam 1
    // transformacja: wartosc dodatnia z poprzedniej litery + numer litery po kolei
    // stan: dp[i] - ile mozna utworzyc roznych substringow do miejsca i, dlugosc obecnego ciagu
    // zbieranie wyniku: jeśli konczy sie ciag liter to wartosc z dp.first z ostatniego pola
    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> dp(n);
    string s;
    cin >> s;
    map<char, bool> keys;
    for(ll i = 0; i<k; i++){
        char c;
        cin >> c;
        keys[c] = true;
    }
    ll wynik = 0;
    for(ll i = 0; i<n; i++){
        if(keys[s[i]] == 0){
            dp[i] = {0,0};
            if(i==0){continue;}
            if(dp[i-1].second > 0){
                wynik += dp[i-1].first;
            }
        }
        else{
            if(i==0){
                dp[i] = {1, 1};
                continue;
            }
            if(dp[i-1].second > 0){
                dp[i] = {dp[i-1].first+dp[i-1].second+1, dp[i-1].second+1};
            }
            else{
                dp[i] = {1, 1};
            }
        }
    }
    wynik += dp[n-1].first;
    cout << wynik << endl;
    return 0;
 
}