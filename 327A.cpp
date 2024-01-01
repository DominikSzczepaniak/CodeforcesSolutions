#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MAX = 3 * 10e5;


int main(){
	int n;
	cin >> n;
	vector<pair<int, int>> sumy(n+1);
	sumy[0] = {0,0};
	for(int i = 1; i<=n; i++){
		int a;
		cin >> a;
		if(a == 1){
			sumy[i].second = sumy[i-1].second + 1;
			sumy[i].first = sumy[i-1].first; 
		}
		else{
			sumy[i].second = sumy[i-1].second;
			sumy[i].first = sumy[i-1].first+1; 
		}
	}
	int ile1 = sumy[n].second;
	int ile0 = sumy[n].first;
	int ans = ile1;
	if(ile0 == 0){
		cout << ile1 - 1 << endl;
		return 0;
	}
	for(int i = 1; i<=n; i++){
		for(int j = i; j<=n; j++){
			ans = max(ans, ile1 - (sumy[j].second - sumy[i-1].second) + (sumy[j].first - sumy[i-1].first) ) ;
		}
	}
	cout << ans << endl;
	

	return 0;	
}