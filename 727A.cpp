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
    int a, b;
    cin >> a >> b;
    if(b%10!=1 && b%2==1){
        cout << "NO" << endl;
        return 0;
    }
    else{
        vector<int> liczby;
        liczby.pb(b);

        while(b!=a){
            if(a>b){
                cout << "NO" << endl;
                return 0;
            }
            if(b%2==0){
                b/=2;
            }  
            else if(b%2==1 && b%10==1){
                b/=10;
            }
            else{
                cout << "NO" << endl;
                return 0;
            }
            liczby.pb(b);
        }  
        cout << "YES" << endl;
        cout << liczby.size() << endl;
        for(int i = liczby.size()-1; i>=0; i--){
            cout << liczby[i] << " ";
        }
    }
}