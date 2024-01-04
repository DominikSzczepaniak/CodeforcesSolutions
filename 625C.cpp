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
    int n, k;
    cin >> n >> k;
    int start = n*n-abs(n-k)-1;//zmniejszaj o n
    twodvector(all, n, n);
    int z = n*n;
    FOR(i,0,n){
        for(int j = n-1; j>=n-(n-k)-1; j--){
            all[i][j] = z;
            z--;
        }
    }
    z = 1;
    FOR(i,0,n){
        for(int j = 0; j<n-(n-k)-1; j++){
            all[i][j] = z;
            z++;
        }
    }
    int sum = 0;
    FOR(i,0,n){
        FOR(j,0,n){
            if(j==k-1){
                sum += all[i][j];
            }
        }
    }
    cout << sum << endl;
    FOR(i,0,n){
        FOR(j,0,n){
            cout << all[i][j] << " ";
        }
        cout << endl;
    }

}