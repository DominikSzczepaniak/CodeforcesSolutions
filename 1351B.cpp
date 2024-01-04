//Author: Dominik Szczepaniak

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define FOR(i, n, m) for(int i=n; i<m; ++i)
#define INSPLIT(ar) for (auto &it : ar) cin >> it
#define SORT(ar) sort((ar).begin(), (ar).end())
#define SORTD(ar) sort(ar.rbegin(), ar.rend())
#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define testcases int t; cin >> t; while(t--)
#define twodvector(nazwa, size1, size2) vector<vector<int>> nazwa( size1 , vector<int> (size2, 0)); 


int main() {
    testcases{
        int a, b, c, d;
        FOR(i,0,2){
            vector<int> g(2);
            cin >> g[0] >> g[1];
            SORT(g);
            if(i==0){
                a = g[0];
                b = g[1];
            }
            else{
                c = g[0];
                d = g[1];
            }
        }
        if(b == d && a+c==b){
            cout<< "YES" << endl;
        }
        else{
            cout << "NO" << endl;

        }
    }
}