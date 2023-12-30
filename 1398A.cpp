#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        vector<pair<int, int>> input(n);
        for(int i = 0; i<n; i++){
            scanf("%d", &input[i].first);
            input[i].second = i+1;
        }
        sort(input.begin(), input.end());
        if(input[n-1].first >= input[0].first + input[1].first){
            printf("%d %d %d\n", input[0].second, input[1].second, input[n-1].second);
        }
        else{
            printf("-1\n");
        }
    }
}