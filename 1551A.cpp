#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MAXN = 5200;

void solve(){
    int n;
    scanf("%d", &n);
    int p = n/3, s = n/3;
    int dodatek = n - p - s*2;
    if(dodatek == 1){
        p++;
    }
    else if(dodatek == 2){
        s++;
    }
    printf("%d %d\n", p, s);
    
 
}
 
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        solve();
    }
    return 0;
}