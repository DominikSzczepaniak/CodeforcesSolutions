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
    //freopen("in.txt","r",stdin);
    testcases{
        int n = 9;

        vector<vector<char>> sud(n);
        FOR(i,0,n){
            string s;
            cin >> s;
            FOR(j,0,n){
                sud[i].pb(s[j]);
            }
        }
        FOR(i,0,n){
            FOR(j,0,n){
                if(sud[i][j] == '1'){
                    sud[i][j] = '9';
                }
            }
        }


        FOR(i,0,n){
            FOR(j,0,n){
                cout << sud[i][j];
            }
            cout << endl;
        }
    }   
}