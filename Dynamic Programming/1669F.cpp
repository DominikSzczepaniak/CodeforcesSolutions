#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n;
    cin >> n;
    int input[n+5];
    for(int i = 1; i<=n; i++){
        int a;
        cin >> a;
        input[i] = a;
    }
    int sumsLeft[n+5];
    sumsLeft[0] = 0;
    for(int i = 1; i<=n; i++){
        sumsLeft[i] = sumsLeft[i-1] + input[i];
    }
    sumsLeft[n+1] = sumsLeft[n];
    int sumsRight[n+5];
    sumsRight[n+1] = 0;
    for(int i = n; i>=1; i--){
        sumsRight[i] = sumsRight[i+1] + input[i];
    }
    sumsRight[0] = sumsRight[1];
    int bestAns = 0;
    int idA = 1, idB = n;
    while(idA < idB){
        if(sumsLeft[idA] == sumsRight[idB]){
            bestAns = max(bestAns, idA + (n-idB+1));
        }
        if(sumsLeft[idA] < sumsRight[idB]){
            idA++;
        }
        else if(sumsRight[idB] < sumsLeft[idA]){
            idB--;
        }
        else{
            if(input[idA+1] < input[idB-1]){
                idA++;
            }
            else{
                idB--;
            }
        }
    }
    cout << bestAns << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
 
}