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
    testcases{
        int n;
        cin >> n;
        vector<int> inp(n);
        FOR(i,0,n){
            cin >>  inp[i];
        }
        FOR(i,0,n){
            if(i%2==0){
                cout << -1 * inp[i+1] << " ";
            }
            else{
                cout << inp[i-1] << " ";
            }
        }

    }
}