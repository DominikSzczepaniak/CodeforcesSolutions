//https://szkopul.edu.pl/problemset/problem/ex8U04OQav3BWcaH7wCtK-_b/site/?key=statement
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    vector<pair<int, int>> input(n+1);
    input[n] = {0, 0};
    for(int i = 0; i<n; i++){
        cin >> input[i].second >> input[i].first;
    }
    sort(input.begin(), input.end());
    int dp[n+1];
    dp[0] = 0;
    for(int i = 1; i<=n; i++){
        int startczas = input[i].second;
        int start = 0, end = i-1;
        while(start<end){
            int mid = ((start+end+1)/2);
            if(input[mid].first > startczas){
                end = mid-1;
            }
            else{
                start = mid;
            }
        }
        int t1 = input[i].first - input[i].second + dp[start];
        int t2 = dp[i-1];
        dp[i] = max(t1, t2);
    }
    cout << dp[n] << endl;
    return 0;
}