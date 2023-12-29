#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MAXN = 2e5;
const int MOD = 1e9 + 9;

void solve(){
	int n;
    cin >> n;
    string s;
	cin >> s;
    vector<bool> pytajnik(n);
	vector<char> one(n);
    vector<char> two(n);
    for(int i = 0; i<n; i++){
        if(s[i] == '?'){
            one[i] = 'B';
            two[i] = 'R';
            pytajnik[i] = true;
        }
        else{
            one[i] = s[i];
            two[i] = s[i];
        }
    }
    for(int i = 0; i<n; i++){
        if(i==0){
            if(one[i] == 'B' && one[i+1] == 'B' && pytajnik[i]){
                one[i] = 'R';
            }
            if(two[i] == 'R' && two[i+1] == 'R' && pytajnik[i]){
                two[i] = 'B';
            }
        }
        else if(i == n-1){
            if(one[i] == 'B' && one[i-1] == 'B' && pytajnik[i]){
                one[i] = 'R';
            }
            if(two[i] == 'R' && two[i-1] == 'R' && pytajnik[i]){
                two[i] = 'B';
            }
        }
        else{
            if(one[i] == 'B' && one[i-1] == 'B' && one[i+1] == 'B' && pytajnik[i]){
                one[i] = 'R';
            }
            if(two[i] == 'R' && two[i-1] == 'R' && two[i+1] == 'R' && pytajnik[i]){
                two[i] = 'B';
            }
        }
    }
    int ans1 = 0;
    int ans2 = 0;
    for(int i = 1; i<n; i++){
        if(one[i] == one[i-1]){
            ans1++;
        }
        if(two[i] == two[i-1]){
            ans2++;
        }
    }
    if(ans1 < ans2){
        for(char c : one){
            cout << c;
        }
        cout << endl;
    }
    else{
        for(char c : two){
            cout << c;
        }
        cout << endl;
    }

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
	// solve();
	return 0;
}