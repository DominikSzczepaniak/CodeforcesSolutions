#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define FOR(i, n, m) for(int i=n; i<m; ++i)
#define INSPLIT(ar) for (auto &it : ar) cin >> it
#define SORT(ar) sort((ar).begin(), (ar).end())
#define SORTD(ar) sort((ar).rbegin(), (ar).rend())
#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define testcases int t; cin >> t; while(t--)
#define twodvector(nazwa, size1, size2) vector<vector<int>> nazwa( size1 , vector<int> (size2, 0))



int main(){
    testcases{
        int n,c,cc,h;
        cin >> n >> c >>cc>>h; //c - cena za 0 
        string s; //cc - cena za 1  
        cin >> s;
        vector<int> all(n);
        FOR(i,0,n){
            if(s[i] == '0'){
                all[i] = c;
            }
            else if(s[i] == '1'){
                all[i] = cc;
            }
        }
        int cena = 0;
        FOR(i,0,n){
            if(all[i] == c){
                if(c>(h+cc)){
                    all[i] = cc;
                    cena+=h;
                }   
            }
            else if(all[i] == cc){
                if(cc>(h+c)){
                    all[i] = c;
                    cena +=h;
                }
            }
        }
        FOR(i,0,n){
            cena += all[i];
        }
        cout << cena << endl;

    }
}