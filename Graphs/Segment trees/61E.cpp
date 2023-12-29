#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll long long
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    ll input[n];
    ordered_set left;
    ordered_set right;
    for(ll i = 0; i<n; i++){
        cin >> input[i];
        if(i > 0){
            right.insert(input[i]);
        }
    }
    ll answer = 0;
    for(ll i = 1; i<n-1; i++){
        right.erase(input[i]);
        ll x = input[i];
        left.insert(input[i-1]);
        ll wynik1, wynik2;
        wynik1 = left.size() - left.order_of_key(x+1);
        wynik2 = right.order_of_key(x);
        answer += wynik1 * wynik2;
    }
    cout << answer << endl;
    return 0;

}