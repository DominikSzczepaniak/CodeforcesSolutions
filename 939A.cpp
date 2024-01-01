#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ll long long
#define pb push_back
template<class T> using ordered_set =tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update> ;


int main(){
    int n;
    cin >> n;
    vector<int> wartosc(n+1);
    for(int i = 1; i<=n; i++){
        cin >> wartosc[i];
    }
    for(int i = 1; i<=n; i++){
        int drugi = wartosc[i];
        int trzeci = wartosc[drugi];
        if(wartosc[trzeci] == i){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;

}