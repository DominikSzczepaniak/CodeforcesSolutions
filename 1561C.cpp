#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MAXN = 5e4+5;

bool mozna(int v, vector<pair<int, vector<int>>>&input){
    for(int i = 0; i<input.size(); i++){
        if(v <= input[i].first){
            return false;
        }
        v += input[i].second.size();
    }
    return true;
}

void solve(){
    int n;
    cin >> n;
    vector<pair<int, vector<int>>> input(n);
    for(int i = 0; i<n; i++){
        int k;
        cin >> k;
        int MAX = 0;
        vector<int> to(k);
        for(int j = 0; j<k; j++){
            int a;
            cin >> a;
            a -= j;
            to[j] = a;
            MAX = max(MAX, a);
        }
        input[i] = {MAX, to};
    }
    sort(input.begin(), input.end());
    int start = 0, end = int(1e9+20);
    while(start < end){
        int mid = (start+end)/2;
        if(!mozna(mid, input)){
            start = mid+1;
        }
        else{
            end = mid;
        }
    }
    cout << start << endl;
    
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