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
    testcases{
        ll n;
        cin >> n;
        ll check = n;
        int ans=0;
        int twos=0, thres=0;
        while(n!=1){
            if(n%3==0){
                n /= 3;
                thres++;
            }
            else if(n%2==0){
                n/=2;
                twos++;
            }
            else{
                break;
            }
        }
        if(n!=1){
            cout << -1 << endl;
        }
        else{
            if(twos > thres){
                cout << -1 << endl;
            }
            else{
                cout << thres - twos + thres << endl;
            }
        }
    }
}