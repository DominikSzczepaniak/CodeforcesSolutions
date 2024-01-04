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

int rbn(int a, vector<unsigned ll> b, int n){
    if(*max_element(b.begin(), b.end()) == 0){
        return 0;
    }
    SORTD(b);
    unsigned ll ans=0;
    FOR(i,0,a+1){
        ans += b[i];
    }
    cout << ans;

}
int rcn(int a){
    vector<int> num(a);
    vector<int> ans;
    vector<int> ans2;
    iota(num.begin(), num.end(), 1);
    FOR(i,0,a){
        if(num.size() == 1){
            cout << num[0] << endl;
            for(int i = 0; i<ans.size(); i++){
                cout << ans[i] << " " << ans2[i] << endl;
            }
            return 0;

        }
        int b = num[a-i-1], c = num[(a-i-1)/2];
        num.erase(num.begin() + (a-i-1));
        num.erase(num.begin() + ((a-i-1)/2));
        num.push_back((b + c) / 2);
        ans.push_back(b);
        ans2.push_back(c);
        SORT(num);
    }
    return 0;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        //int n;
        //cin >> n;
        //rcn(n);




        int n, k;
        cin >> n >> k;
        vector<unsigned ll> bar(n);
        FOR(i,0,n){
            cin >> bar[i];
        }
        SORTD(bar);
        unsigned ll ans=0;
        FOR(i,0,k+1){
            ans += bar[i];
        }
        cout << ans << endl;
        //cout << rbn(k, bar, n) << endl;

    }


}