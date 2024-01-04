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

int main() {
    fast
    //freopen("1.txt", "r", stdin);
    int n;
    cin >> n;
    FOR(i,0,n){
        int t;
        cin >> t;
        int ans=0;
        string b = to_string(t);
        ans += 10* ((t-1)%10);
        int c = b.length();
        if(c==1){
            ans += 1;
        }
        else if(c==2){
            ans += 3;
        }
        else if(c==3){
            ans += 6;
        }
        else if(c==4){
            ans += 10;
        }

        cout << ans << endl;
    }
    return 0;
}