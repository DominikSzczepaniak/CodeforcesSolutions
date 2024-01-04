#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define all(c) (c).begin(), (c).end()
#define FOR(i, n, m) for(int i=n; i<m; ++i)
#define INSPLIT(ar) for (auto &it : ar) cin >> it
#define vt(type, name, size) vector<type> name(size)
#define SORT(ar) sort(all(ar))
#define SORTD(ar) sort(ar.rbegin(), ar.rend())
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
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << 2 << endl;
        if(n>2){
            cout << n << " " << n-2 << endl << n-1 << " " << n-1 << endl;
            n-=2;
            while(n>1){
                cout << n+1 << " " << n-1 << endl;
                n--;
            }
        }
        else{
            cout << 1 << " " << 2 << endl;
        }
    }
    return 0;
}