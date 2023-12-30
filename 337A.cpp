#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MAXN = 5200;


int main(){
    int n, k;
    scanf("%d%d", &n, &k);
    vector<int> input(k);
    for(int i = 0; i<k; i++){
        scanf("%d", &input[i]);
    }
    sort(input.begin(), input.end());
    int ans = INT_MAX;
    for(int i = 0; i+n-1<k; i++){
        ans = min(abs(input[i]-input[i+n-1]), ans);
    }
    printf("%d\n", ans);


    

}