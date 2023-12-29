#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin >> n >> m;
    int przegral[n+1];
    memset(przegral,0,sizeof(przegral));
    set<int> obecni;
    for(int i = 1; i<=n; i++){
        obecni.insert(i);
    }
    for(int i = 0; i<m; i++){
        int a, b, c;
        cin >> a >> b >> c;
        auto it = obecni.lower_bound(a);
        vector<int> del;
        while(it != obecni.end()){
            if(*it > b){
                break;
            }
            przegral[*it] = c;
            del.push_back(*it);
            it++;
        }
        przegral[c] = 0;
        for(int i : del){
            obecni.erase(i);
        }
        obecni.insert(c);
    }
    for(int i = 1; i<=n; i++){
        cout << przegral[i] << " ";
    }
    cout << endl;
}