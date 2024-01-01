#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MAX = 2*100000;


long long calculate(ll x, vector<ll> input){
    ll ret = 0;
    for(int i = 0; i<input.size(); i++){
        ret += max((ll)0, x - input[i]);
    }
    return ret;
}

int main(){
    int n, k;
    cin >> n >> k;
    vector<ll> input(n);
    vector<ll> changed(n/2+1);
    for(int i = 0; i<n; i++){
        cin >> input[i];
    }
    sort(input.begin(), input.end());
    for(int i = n/2, j=0; i<n; i++, j++){
        changed[j] = input[i];
    }

    ll start = 0, koniec = 100000000000;
    while(start < koniec){
        ll mid = (start+koniec)/2;
        ll wynik = calculate(mid, changed);
        if(wynik > k){
            koniec = mid-1;
        }
        else if(wynik < k){
            start = mid+1;
        }
        else{
            cout << mid << endl;
            return 0;
        }
        
    }
    while(calculate(start, changed) >k){
        start--;
    }
    cout << start << endl;
    return 0;
}