#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back


int main(){
	int n;
	cin >> n;
	vector<int> input(n);
	map<int, int> ile;
	for(int i = 0; i<n; i++){
		cin >> input[i];
		ile[input[i]]++;
	}
	sort(input.begin(), input.end());
	ll ans = 0;
	for(int i = 0; i<n; i++){
		if(ile[input[i]-1] == 0 && input[i]-1 > 0){
			ile[input[i]]--;
			ile[input[i]-1]++;
			input[i]--;
		}
		else if(ile[input[i]] == 1){
			continue;
		}
		else{
			ile[input[i]]--;
			ile[input[i]+1]++;
			input[i]++;
		}
	}
	// for(int i = 0; i<n; i++){
	// 	cout << input[i] << " ";
	// }
	// cout << endl;
	for(auto u : ile){
		if(u.second >= 1){
			ans++;
		}
	}
	cout << ans << endl;
	

	return 0;
}