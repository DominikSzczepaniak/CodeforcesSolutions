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
    vector<char> vow;
    vow.pb('a'); vow.pb('e'); vow.pb('i'); vow.pb('o'); vow.pb('u');
    string a,b;
    cin >> a;
    cin >> b;
    bool y = true;
    if(a.length() != b.length()){
        y = false;
    }
    FOR(i,0,a.length()){
        if(count(vow.begin(), vow.end(), a[i]) >= 1 && count(vow.begin(), vow.end(), b[i]) == 0){
            y = false;
            break;
        }
        else if(count(vow.begin(), vow.end(), a[i]) == 0 && count(vow.begin(), vow.end(), b[i]) >= 1){
            y = false;
            break;
        }
    }
    if(y==true){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}