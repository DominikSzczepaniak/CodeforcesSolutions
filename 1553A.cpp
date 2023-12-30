#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MAXN = 5200;

void solve(){
    // 1-10 -> 1
    // 11->100 -> 9
    // 101->1000 -> 81
    ll n;
    scanf("%lld", &n);
    n++;
    printf("%lld\n", n/10);
    

}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        solve();
    }
    return 0;
}