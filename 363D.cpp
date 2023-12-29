#include <bits/stdc++.h>
#include <chrono>
#include <thread>
#include <cstdint>
using namespace std;
#define ll long long
#define pb push_back

bool canthey(vector<int> p, vector<int> b, int x, int a){
    int kaska = a;
    for(int i = 0, j=x-1; i<x; i++, j--){
        if(b[j] < p[i]){
            if(kaska >= p[i]-b[j]){
                kaska -= p[i]-b[j];
            }
            else{
                return false;
            }
        }
    }
    return true;
}

void solve(){
    int n, m, a;
    cin >> n >> m >> a;
    vector<int> b(n);
    vector<int> p(m);
    for(int i = 0; i<n; i++){
        cin >> b[i];
    }
    for(int i = 0; i<m; i++){
        cin >> p[i];
    }
    sort(b.rbegin(), b.rend());
    sort(p.begin(), p.end());
    int start = 0, end = min(n, m);
    while(start < end){
        int mid = (start+end+1)/2;
        if(!canthey(p, b, mid, a)){
            end = mid-1;
        }
        else{
            start = mid;
        }
    }
    int wymaganacena = 0;
    int posiadanepieniadze = 0;
    for(int i = 0; i<start; i++){
        wymaganacena += p[i];
        posiadanepieniadze += b[i];
    }
    wymaganacena -= a;
    wymaganacena = max(0, wymaganacena);
    cout << start << " " << wymaganacena << endl;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // int t;
    // cin >> t;
    // while(t--){
    //     solve();
    // }
    solve();
    
    
}