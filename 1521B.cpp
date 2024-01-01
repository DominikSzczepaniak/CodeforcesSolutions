#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ll long long
#define pb push_back
template<class T> using ordered_set =tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update> ;

void solve(){
    int n;
    cin >> n;
    vector<int> input(n);
    int minn = INT_MAX;
    int id;
    for(int i = 0; i<n; i++){
        cin >> input[i];
        if(input[i] < minn){
            id = i;
            minn = input[i];
        }
    }
    cout << n-1 << endl;
    for(int i = 0; i<n; i++){
        if(id == i ){
            continue;
        }
        if(i%2 == id%2){
            cout << i+1 << " " << id+1 << " " << minn << " " << minn << endl;
        }
        else{
            cout << i+1 << " " << id+1 << " " << minn+1 << " " << minn << endl;
        }
    }

}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}