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
    int n, q;
    cin >> n>>q;
    vector<int> servers(n);
    int lastt=0;
    FOR(i,0,q){
        int t,k,d;
        cin >> t>> k >> d;
        FOR(i,0,n){
            servers[i] -= abs(lastt-t);
            if(servers[i] < 0){
                servers[i] = 0;
            }
        }
        int av=0;
        int ans=0;
        vector<int> used;
        FOR(i,0,n){
            if(servers[i] == 0){
                ans+=i+1;
                servers[i] = d;
                used.pb(i);
                av++;
                if(av==k){
                    break;
                }
            }
        }
        if(av==k){
            cout << ans << endl;
        }
        else{
            cout << -1 << endl;
            FOR(i,0,used.size()){
                servers[used[i]] = 0;        
            }
        }
        lastt= t;
    }

}