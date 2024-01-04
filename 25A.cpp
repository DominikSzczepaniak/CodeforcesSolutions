#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define all(c) (c).begin(), (c).end()
#define FOR(i, n, m) for(int i=n; i<m; ++i)
#define INSPLIT(ar) for (auto &it : ar) cin >> it
#define vt(type, name, size) vector<type> name(size)
#define SORT(ar) sort(all(ar))


int main(){
    int n, even=0, odd=0;
    cin >> n;
    vt(int, tab, n);
    INSPLIT(tab);
    FOR(i,0,n){
        if(tab[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    FOR(i,0,n){
        if(even>odd){
            if(tab[i]%2==1){
                cout << i+1;
            }
        }
        else{
            if(tab[i]%2==0){
                cout << i+1;
            }
        }
    }
}
 