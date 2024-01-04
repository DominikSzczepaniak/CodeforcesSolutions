#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define all(c) (c).begin(), (c).end()
#define FOR(i, n, m) for(int i=n; i<m; ++i)
#define INSPLIT(ar) for (auto &it : ar) cin >> it
#define vt(type, name, size) vector<type> name(size)
#define SORT(ar) sort(all(ar))
#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, ans=0, c, d;
        cin >> a >> b;
        while(a!=b){
            if(b>a){
                c = b-a;
                d = c/10;

                a+=(d*10);
                ans += d;
                if(a!=b){
                    a += b-a;
                    ans++;
                }
            }
            else{
                c = a-b;
                d = c/10;

                a-=(d*10);
                ans += d;
                if(a!=b){
                   a -= a-b;
                    ans++;
                }
            }


        }
        if(a==b){
            cout << ans << endl;
        }
    }
}
 