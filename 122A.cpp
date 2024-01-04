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
    int a;
    cin >> a;
    if(a%4==0 || a%7==0 || a%47==0 || a%74==0 || a%777==0 || a%774==0 || a%744==0 || a%747==0 || a%444==0 || a%447==0 || a%474==0 || a%477==0){
        cout << "YES";
        return 0;
    }
    else{
        cout << "NO";
        return 0;
    }


}