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
    int n,b,ans=0;
    cin >> n >> b;
    while(n!=b){
        if(b%2==0){
            if(b>n){
               b/=2;
                ans+=1;
            }
            else{
                ans++;
                b++;
            }
        }
        else{
            b++;
            ans+=1;
        }
    }
    cout << ans;
}
 