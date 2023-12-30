#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve(){
	int n;
	cin >> n;
	vector<int> input(n);
	for(int i = 0; i<n; i++){
		cin >> input[i];
	}
	int last = 0;
	for(int i = n-1; i>=0; i--){
		if(input[i] != i+1){
			last = i;
			break;
		}
	}
	// cout << last << endl;
	if(last == 0){
		cout << 0 << endl;
		return;
	}
	int start = 0;
	for(int i = 0; i<=last; i++){
		if(input[i] != i+1){
			start = i;
			break;
		}
	}
	int git = 0;
	for(int i = start; i<=last; i++){
		if(input[i] == i+1){
			git++;
		}
	}
	if(git == 0){
		cout << 1 << endl;
		return;
	}
	else{
		cout << 2 << endl;
		return;
	}


}

int main(){
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