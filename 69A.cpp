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
    int tt;
    cin >> tt;
    vector<ll> x(tt);
    vector<ll> y(tt);
    vector<ll> z(tt);
    FOR(i,0,tt){
        cin >> x[i] >> y[i] >> z[i];
    }

    ll sumx = 0,sumy = 0,sumz = 0;
    FOR(j,0,tt){
        sumx += x[j];
        sumy += y[j];
        sumz += z[j];
    }



    if(sumx!=0 || sumy != 0 || sumz != 0){
        cout << "NO";
        return 0;
    }
    else{
        cout << "YES";
        return 0;
    }


}