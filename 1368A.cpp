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
    int i, m=0;
    m=n/2;
    for(i = 2; i <= m; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main() {
    fast
    int t;
    cin >> t;
    while(t--){
        ll a, b, n;
        cin >> a >> b >> n;
        vector<int> s(2);
        s[0] = a;
        s[1] = b;
        SORT(s);
        int i=0;
        while(s[0] <= n || s[1] <= n){
            s[0] += s[1];
            SORT(s);
            i++;
            if(s[0] > n || s[1] > n){
                break;
            }
        }
        cout << i << endl;
    }
}