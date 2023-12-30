#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MAXN = 5200;

void solve(){
    char input[11];
    scanf("%s", input);
    string s = (string)input;
    s = "?" + s;
    vector<vector<pair<int, int>>> DP(2, vector<pair<int, int>>(11));
    // 0 -> fawor first
    // 1 -> fawor second
    vector<int> zostalo = {5, 4, 4, 3, 3, 2, 2, 1, 1, 0};
    for(int i = 1; i<=10; i++){
        DP[1][i] = DP[1][i-1];
        DP[0][i] = DP[0][i-1];
        if(i%2==1){
            if(s[i] == '1'){
                DP[0][i].first++;
                DP[1][i].first++;
            }
            else if(s[i] == '?'){
                DP[0][i].first++;
            }
        }
        if(i%2==0){
            if(s[i] == '1'){   
                DP[0][i].second++;
                DP[1][i].second++;
            }
            else if(s[i] == '?'){
                DP[1][i].second++;
            }
        }
    }
    // for(int i = 1; i<=10; i++){
    //     printf("%d ", DP[0][i].first);
    // }
    // printf("\n");
    // for(int i = 1; i<=10; i++){
    //     printf("%d ", DP[0][i].second);
    // }
    // printf("\n");
    // for(int i = 1; i<=10; i++){
    //     printf("%d ", DP[1][i].first);
    // }
    // printf("\n");
    // for(int i = 1; i<=10; i++){
    //     printf("%d ", DP[1][i].second);
    // }
    // printf("\n");
    for(int i = 1; i<=10; i++){
        if(i%2==1){
            if(DP[0][i].first > DP[0][i].second + zostalo[i-1]){
                printf("%d\n", i);
                return;
            }
            if(DP[1][i].second > DP[1][i].first + zostalo[i]){
                printf("%d\n", i);
                return;
            }
        }
        else{
            if(DP[1][i].second > DP[1][i].first + zostalo[i-1]){
                printf("%d\n", i);
                return;
            }
            if(DP[0][i].first > DP[0][i].second + zostalo[i]){
                printf("%d\n", i);
                return;
            }
        }
    }
    printf("%d\n", 10);

}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        solve();
    }
    return 0;
}