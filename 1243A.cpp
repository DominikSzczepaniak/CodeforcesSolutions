#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MAX = 200000;


int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> input(n);
        int ans = 0;
        for(int i = 0; i<n; i++){
            cin >> input[i];
        }
        sort(input.rbegin(), input.rend());
        for(int i = 0; i<n; i++){
//             cout << input[i] << " ";
            if(input[i] >= i+1){
                ans = i+1;
            }
        }
//         cout << endl;
        cout << ans << endl;
    }

}

 