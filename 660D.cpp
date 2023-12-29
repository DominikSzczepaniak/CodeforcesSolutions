#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MAXN = 5e4+5;

map<double, map<double, int>> ox;

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n;
    cin >> n;
    vector<pair<double, double>> input(n);
    for(int i = 0; i<n; i++){
        int a, b;
        cin >> a >> b;
        input[i] = {a, b};
    }
    int ans = 0;
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(i == j){
                continue;
            }
            double o1 = abs(input[i].first + input[j].first)/2;
            double o2 = abs(input[i].second+input[j].second)/2;
            ox[o1][o2]++;
        }
    }
    for(auto u : ox){
        for(auto j : u.second){
            // cout << u.first << " " << j.first << " " << j.second << endl;
            ans += (j.second * (j.second-1))/2;
        }
    }
    cout << ans << endl;





}