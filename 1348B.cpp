#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
	int n, k;
	cin >> n >> k;
	vector<int> input(n);
	vector<bool> ile(n+5, false);
	vector<int> nowe;
	int rozne = 0;
	for(int i = 0; i<n; i++){
		cin >> input[i];
		// cout << input[i] << " " << ile[input[i]] << endl;
		if(!ile[input[i]]){
			rozne++;
			ile[input[i]] = true;
			nowe.push_back(input[i]);
		}
	}
	sort(nowe.rbegin(), nowe.rend());
	while(nowe.size() < k){
		nowe.push_back(1);
	}
	if(rozne > k){
		cout << -1 << endl;
	}
	else{
		cout << n * nowe.size() << endl;
		for(int i = 0; i<n; i++){
			for(int j : nowe){
				cout << j << " ";
			}
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
	
	return 0;
}