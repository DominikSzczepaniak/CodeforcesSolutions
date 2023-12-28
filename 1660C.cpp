#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //mozemy albo wziac litere albo jej nie brac - jezeli wezmiemy no to musimy ja polaczyc z ostatnim wystapieniem danej litery, wiec odpowiedzia bedzie wynik o 1 przed ostatnia litera + 2 (para obecnych liter)
    // jesli nie bierzemy danej litery, no to bierzemy ostatni wynik z poprzedniej wartosci
    int t;
    cin >> t;
    int odpowiedzi[t];
    for(int test=0; test<t; test++){
        string s;
        cin >> s;
        s = "?" + s;
        int n = s.length();
        int dp[n];
        for(int i = 0; i<n; i++){
            dp[i] = 0;
        }
        int last[26];
        for(int i = 0; i<26; i++){
            last[i] = -5;
        }
        for(int i = 1; i<n; i++){
            int x = int(s[i] - 'a');
            if(last[x] == -5){ //litera nigdy nie wystapila wczesniej - bierzemy odpowiedz dla poprzedniej litery
                dp[i] = dp[i-1];
            }
            else{ // litera juz wystapila wiec albo ja bierzemy - ostatnia odpowiedz poprzedzajaca ta sama litere + 2(bo ta para liter ktora sie teraz zlaczy) albo pomijamy ta litere - dp[i-1]
                dp[i] = max(dp[i-1],dp[last[x]-1]+2);
            }
            last[x] = i;
        }
        odpowiedzi[test] = n-1-dp[n-1];
    }
    for(int i : odpowiedzi){
        cout << i << endl;
    }

    return 0;
 
}