#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MAXN = 5e4+5;

void solve(){
    int h, w;
    cin >> h >> w;
    for(int j = 0; j<h; j++){
        for(int i = 0; i<w; i++){
            if(i%2==0 && (j == 0 || j == h-1)){
                cout << 1;
            }
            else if((i == 0 || i == w-1) && (j> 1 && j < h-2 && j%2==0)){
                cout << 1;
            }
            else{
                cout << 0;
            }
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        solve();
    }



}