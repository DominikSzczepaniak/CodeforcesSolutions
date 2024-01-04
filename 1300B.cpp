#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define ar array
#define all(c) (c).begin(), (c).end()
#define FOR(i, n, m) for(int i=n; i<m; ++i)

int main()
{
    int t;
    cin >> t;
    while(t){
        int n, half;
        cin >> n;
        vector<int> p(n*2);
        for (auto &it : p) cin >> it;
        sort(all(p));
        half = p.size() / 2;
        cout << p[half] - p[half-1] << endl;
        t--;
    }
    return 0;
}