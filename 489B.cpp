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
 

int main()
{
    int n;
    cin >> n;
    vector<pair<int, bool>> boys(n);
    int a;
    FOR(i,0,n){
    	cin >> a;
    	boys[i] = make_pair(a, false);
    }
    int m;
    cin >> m;
    vector<pair<int, bool>> girls(m);
    FOR(i,0,m){
    	cin >> a;
    	girls[i] = make_pair(a, false);
    }
    SORT(boys);
    SORT(girls);
    int ans = 0;
    FOR(i,0,n){
    	FOR(j,0,m){
    		if(abs(boys[i].first - girls[j].first) <= 1  && boys[i].second == false && girls[j].second == false){
    			ans++;
    			boys[i].second = true;
    			girls[j].second = true;
    			continue;
    		}
    	}
    }
    cout << ans << endl;
}