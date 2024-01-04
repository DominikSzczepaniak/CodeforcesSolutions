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
bool decreasing(int a, int b){ return a>b;}
bool increasing(int a, int b){ return a<b;}
bool is_prime(int n){
    int i, m=0, flag=0;
    m=n/2;
    for(i = 2; i <= m; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    if (flag==0)
        return true;
}

int main() {
    ll n, a=0, ans=0;
    cin >> n;
    for(ll i=0; i<=n; i++){
        a += i;
        ans += a;
        if(ans>n){
            cout << i-1 << endl;
            break;
        }
        if(ans==n){
            cout << i << endl;
            break;
        }
    }








}