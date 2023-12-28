#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0);
    cout.tie(0);
    int n, m, k;
    cin >> n >> m >> k;
    int broken[n];
    for(int i = 0; i<n; i++){
        cin >> broken[i];
    }
    vector<int> dlugosci;
    for(int i = 0; i<n-1; i++){
        dlugosci.push_back(broken[i+1]-broken[i]-1);
    }
    sort(dlugosci.begin(), dlugosci.end());
    if(n == k){
        cout << n << endl;
        return 0;
    }
    else{
        int wynik = n;
        for(int i = 0; i<n-k; i++){
            wynik += dlugosci[i];
        }
        cout << wynik << endl;
    }
    

    return 0;
}