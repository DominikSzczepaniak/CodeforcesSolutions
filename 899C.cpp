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
    int sumr = 0;
    int suml=0;
    vector<int> right;
    vector<int> left;
    for(int i = n; i>=1; i--){
        if(suml<sumr){
            suml+=i;
            left.pb(i);
        }
        else{
            sumr+=i;
            right.pb(i);
        }
    }
    SORT(left);
    cout << abs(suml - sumr) << endl;
    cout << left.size() << " ";
    for(int element : left){
        cout << element << " ";
    }
    
    

}