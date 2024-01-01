#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MAX = 1e6;
const ll MOD = 1e9+7;

void solve(){
    int n;
    cin >> n;
    vector<int> input(n);
    int sum = 0;
    for(int i = 0; i<n; i++){
        cin >> input[i];
        sum += input[i];
    }
    sort(input.rbegin(), input.rend());
    double avg = (double)sum / (double)n;
    int m = n;
    int ans =0;
    for(int i = 0; i<n; i++){
        if(input[i] > avg){
            sum -= input[i];
            m--;
            avg = (double)sum/ (double)m;
            ans++;
        }
        else{
            break;
        }
    }
    cout << ans << endl;

}


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	bool testcases = true;
	if(testcases){
		int t;
		cin >> t;
		while(t--){
			solve();
		}
	}
	else{
		solve();
	}
	return 0;	
}
 