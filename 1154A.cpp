#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define FOR(i, n, m) for(int i=n; i<m; ++i)
#define INSPLIT(ar) for (auto &it : ar) cin >> it
#define SORT(ar) sort((ar).begin(), (ar).end())
#define SORTD(ar) sort(ar.rbegin(), ar.rend())
#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back


int main() {
    int a;
    vector<int> arr;
    FOR(i,0,4){
        cin >> a;
        arr.pb(a);
    }
    SORT(arr);
    cout << arr[3]-arr[2] << " " <<  arr[3]-arr[1] << " " << arr[3]-arr[0] << endl;

}