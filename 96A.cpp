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
    string s;
    cin >> s;
    int a=0;
    int maxi=0;
    FOR(i,0,s.length()){
        if(s[i]==s[i+1]){
            a++;
        }
        else{
            maxi=max(maxi, a);
            a = 0;
        }
    }
    if(maxi >=6){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}