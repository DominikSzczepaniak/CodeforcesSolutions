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
        vector<int> all(n);
        map<int, int> nums;
        FOR(i,0,n){
            cin >> all[i];
            nums[all[i]] += 1;
        }
        int minans=INT_MAX;
        int point = -1;
        bool y = false;
        FOR(i,0,n){
            if(nums[all[i]] == 1){
                if(minans > all[i]){
                    y = true;
                    minans=all[i];
                    point = i+1;
                }
            }
        }
        if(y == false){
            cout << -1 << endl;
        }
        else{
            cout << point << endl;
        }
    }
}