#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define endl '\n'
void solve(){
    int n, m;
    cin >>n >> m;
    vector<string> przed(n);
    for(int i = 0; i<n; i++){
        cin >> przed[i];
    }
    vector<string> po(n-1);
    for(int i = 0; i<n-1; i++){
        cin >> po[i];
    }
    string ans = "";
    for(int i = 0; i<m; i++){
        map<char, int> ile;
        map<char, bool> taken;
        for(int j = 0; j<n; j++){
            ile[przed[j][i]]++;
        }
        for(int j = 0; j<n-1; j++){
            ile[po[j][i]]--;
        }
        for(int j = 0; j<n; j++){
            if(ile[przed[j][i]] == 1 && !taken[przed[j][i]]){
                ans += przed[j][i];
                taken[przed[j][i]] = true;
            }
        }
    }
    cout << ans << endl;
    fflush(stdout);
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--){
		solve();
	}
	return 0;
}