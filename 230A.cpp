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
    int s, n;
    cin >> s >> n;
    vector<pair<int,int>> str;
    FOR(i,0,n){
        int x, y;
        cin >> x >> y;
        str.push_back(make_pair(x,y));
    }
    SORT(str);
    FOR(i,0,n){
        if(s>str[i].first){
            s += str[i].second;
        }
        else{
            cout << "NO" << endl;
            return 0;
        }

    }
    cout << "YES" << endl;
}