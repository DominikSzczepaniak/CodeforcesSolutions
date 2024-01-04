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
    ll n;
    cin >> n;
    ll odp=0;
    for(int i = 1; i<=n; i++){
        odp += pow(2, i);
    }
    cout << odp << endl;

}