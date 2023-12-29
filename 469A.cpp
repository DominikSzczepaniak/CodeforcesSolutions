#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    set<int> mozl;
    for(int i = 0; i<2; i++){
        int p;
        cin >> p;
        for(int j = 0; j<p; j++){
            int a;
            cin >> a;
            mozl.insert(a);
        }
    }
    if(mozl.size() == n){
        cout << "I become the guy." << '\n';
    }
    else{
        cout << "Oh, my keyboard!" << '\n';
    }

    return 0;
 
}