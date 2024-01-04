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
    double a, b;
    cin >> a >> b;
    int srodek=a/b;
    double s = a/b;
    if(a<b){
        int srodek=(a+b)/2;
        double s = (a+b)/2;
        if(srodek == s){
            cout << srodek-1 << " " << 1 << " " << 6-srodek;
        }
        else{
            cout << srodek << " " << 0 << " " << 6-srodek;
        }
    }
    else if(b<a){
        int srodek=(a+b)/2;
        double s = (a+b)/2;
        if(srodek == s){
            cout << 6-srodek << " " << 1 << " " << srodek-1;
        }
        else{
            cout << 6-srodek << " " << 0 << " " << srodek;
        }
    }
    else{
        cout << 0 << " " << 6 << " " << 0 << endl;
    }
}