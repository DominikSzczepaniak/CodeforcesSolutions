#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MAXN = 5200;


int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        ll n, k;
        scanf("%lld%lld", &n, &k);
        if(n>k){
            ll multiple = ceil((double)n/(double)k);
            k *= multiple;
        }
        ll start = 1, end = k;
        while(start<end){
            ll mid = (start+end)/2;
            if(mid * n < k){
                start = mid+1;
            }
            else{
                end = mid;
            }
        }
        printf("%lld\n", start);
    }
}