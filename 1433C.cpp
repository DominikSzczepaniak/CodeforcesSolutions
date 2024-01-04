#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define FOR(i, n, m) for(int i=n; i<m; ++i)
#define INSPLIT(ar) for (auto &it : ar) cin >> it
#define SORT(ar) sort((ar).begin(), (ar).end())
#define SORTD(ar) sort(ar.rbegin(), ar.rend())
#define endl '\n'
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define testcases int t; cin>>t; while(t--)

int main() {
    fast
    testcases{
        int n;
        cin >> n;
        vector<int> kkk(n);
        FOR(i,0,n){
            cin >> kkk[i];
        }
        int mx = *max_element(kkk.begin(), kkk.end());
        int done = 0;
        FOR(i,0,n){
            if(kkk[i] == mx){
                if(i-1>=0){
                    if(kkk[i-1] < mx){
                        cout << i+1 << endl;
                        done = 1;
                        break;
                    }
                }
                if(i+1 < n){
                    if(kkk[i+1] < mx){
                        cout << i +1 << endl;
                        done = 1;
                        break;

                    }
                }
            }
        }
        if(done == 0){
            cout << -1 << endl;
        }
    }

}