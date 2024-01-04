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
int fibonacci(int n){

    int F[n+1];
    F[0] = 0;
    F[1] = 1;
    for(int i = 2; i <= n; i++)
        F[i] = F[i-1] + F[i-2];
    return F[n];
}
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
    fast
    ll n, m, a,wid,hei;
    cin >> n >> m >> a;
    ld i=n, j=a;
    i = i/j;
    ll temp;
    temp = n/a;
    if(i>temp){
        wid = temp+1;
    }
    else{
        wid = temp;
    }
    i = m;
    i = i/j;
    temp = m/a;
    if(i>temp){
        hei = temp+1;
    }
    else{
        hei = temp;
    }
    cout << hei * wid;
    return 0;
}
 