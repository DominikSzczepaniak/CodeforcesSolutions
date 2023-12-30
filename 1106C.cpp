#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main(){
    int n;
    scanf("%d", &n);
    vector<int> input(n);
    for(int i = 0; i<n; i++){
        scanf("%d", &input[i]);
    }
    sort(input.begin(), input.end());
    ll ans = 0;
    for(int i = 0; i<n/2; i++){
        ans += (input[i] + input[n-i-1]) * (input[i] + input[n-i-1]);
    }
    printf("%lld\n", ans);
}