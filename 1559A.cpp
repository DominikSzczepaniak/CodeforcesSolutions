#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MAXN = 1e5;
const int MOD = 1e9 + 9;

void solve(){
    int n;
    cin >> n;
    int ans;
    cin >> ans;
    for(int i = 0; i<n-1; i++){
        int a;
        cin >> a;
        ans = (ans & a);
    }
    cout << ans << endl;
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
    cin >> t;
    while(t--){
        solve();
    }

	return 0;
}