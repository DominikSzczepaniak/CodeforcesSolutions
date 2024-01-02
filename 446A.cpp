#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
 
int main() {
    int n;
    cin >> n;
    vector<int> input(n+2);
    for(int i = 1; i<=n; i++){
        cin >> input[i];
    }
    vector<int> lewo(n+2);
    vector<int> prawo(n+2);
    for(int i = 1; i<=n; i++){
        if(i != 1 && input[i] > input[i-1]){
            lewo[i] = lewo[i-1] + 1;
        }
        else{
            lewo[i] = 1;
        }
    }
    for(int i = n; i>=1; i--){
        if(i != n && input[i] < input[i+1]){
            prawo[i] = prawo[i+1] + 1;
        }
        else{
            prawo[i] = 1;
        }
    }
    int ans = 1;
    for(int i = 1; i<=n; i++){
        ans = max(ans, 1+lewo[i-1]);
        ans = max(ans, 1+prawo[i+1]);
        if(input[i+1] - input[i-1] >= 2){
            ans = max(ans, 1+lewo[i-1] + prawo[i+1]);
        }
    }
    cout << ans << endl;
    return 0;
}