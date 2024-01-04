#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define FOR(i, n, m) for(int i=n; i<m; ++i)
#define FORE(i,n,m) for(int i=n;i<=m; ++i)
#define INSPLIT(ar) for (auto &it : ar) cin >> it
#define SORT(ar) sort((ar).begin(), (ar).end())
#define SORTD(ar) sort(ar.rbegin(), ar.rend())
#define endl '\n'
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define testcases int t; cin>>t; while(t--)


int main()
{
    //freopen("input.in", "r", stdin);
    fast
    testcases{
        int n;
        cin >> n;
        vector<int> ar(n);
        FOR(i,0,n){
            cin >> ar[i];
        }
        int niep=0, par=0;
        FOR(i,0,n){
            if(i%2==0 && ar[i]%2 != 0){
                niep++;
            }
            else if(i%2==1 && ar[i]%2 != 1){
                par++;
            }
        }
        if(niep != par){
            cout << -1 << endl;
        }
        else{
            cout << (niep + par) / 2 << endl;
        }
    }
}