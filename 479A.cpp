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
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    int jeden = (a+b)*c;
    int dwa = a*(b+c);
    int trzy = a*b*c;
    int cztery = (a+b+c);
    int piec = a+b*c;
    int szesc = a*b+c;
    cout << max(jeden, max(dwa, max(trzy, max(cztery, max(piec, szesc)))));
}