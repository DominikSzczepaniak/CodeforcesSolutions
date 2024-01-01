#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ll long long
#define pb push_back
template<class T> using ordered_set =tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update> ;


void solve(){
    ll a, b;
    cin >> a >> b;
    if(b == 1){
        cout <<"NO" << endl;
        return;
    }
    ll x = a * b;
    ll y = a;
    if(x==a){
        y *=a;
    }
    ll z = x+y;
    if(y%x==0){
        y+=y;
        z = x+y;
    }
    cout << "YES" << endl;
    cout << x << " " << y << " " << z<<endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}