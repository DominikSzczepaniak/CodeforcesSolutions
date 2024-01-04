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
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> num(n);
    FOR(i,0,n){
        num[i] = s[i] - '0';
    }
    vector<int> ans;
    SORTD(num);
    FOR(i,0,n){
        if(num[i] == 4){
            ans.pb(3);
            ans.pb(2);
            ans.pb(2);
        }
        else if(num[i] == 8){
            ans.pb(7);
            ans.pb(2);
            ans.pb(2);
            ans.pb(2);
        }
        else if(num[i] == 6){
            ans.pb(5);
            ans.pb(3);
        }
        else if(num[i] == 9){
            ans.pb(7);
            ans.pb(3);
            ans.pb(3);
            ans.pb(2);
        }
        else if(num[i]==1 || num[i] ==0){
            continue;
        }
        else{
            ans.pb(num[i]);
        }
    }
    SORTD(ans);
    FOR(i,0,ans.size()){
        cout << ans[i];
    }    
}