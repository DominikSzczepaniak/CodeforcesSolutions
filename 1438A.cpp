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
    testcases{
        int n;
        cin >> n;
        int odp;
        for(int i=1; i<=100; i++){
            for(int j=1; j<=n; j++){
                if(i%j!=0){
                    break;
                }
                else{
                    if(j==n){
                        odp = i;
                    }
                }
            }
        }
        FOR(i,0,n){
            cout << odp << " ";
        }
        cout << endl;
        
    }
}