#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MAX = 200000;

typedef pair<int, int> pi;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	if(n*9 < k || (k == 0 && n != 1) ){
		cout << -1 << " " << -1 << endl;
		return 0;
	}
	string wieksza = "";
	string mniejsza = "";
	vector<int> bigger(n);
	for(int i = 0; i<n; i++){
		bigger[i] = min(9, k);
		k -= bigger[i];
		//cout << bigger[i];
		wieksza += to_string(bigger[i]);
	}
	//cout << " ";
	if(bigger[n-1] == 0){
		for(int i = n-2; i>=0; i--){
			if(bigger[i] >= 1){
				bigger[i]--;
				bigger[n-1]++;
				break;
			}
		}
	}
	for(int i = n-1; i>=0; i--){
		mniejsza += to_string(bigger[i]);
	}
	cout << mniejsza << " " << wieksza << endl;
	
	



	return 0;	
}