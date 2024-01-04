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
#define testcases int t; cin >> t; while(t--)
#define pb push_back


int main() {
    testcases{
        int n;
        cin >> n;
        if(n==1){
            cout << 0 << endl;
        }
        else if(n==3){
            cout << 8 << endl;
        }
        else{
            ll odp = 0;
            for(ll i=1; i<=(n-1)/2; i++){
                odp += i*i;
            }
            cout << odp * 8 << endl;

        }
    }

}