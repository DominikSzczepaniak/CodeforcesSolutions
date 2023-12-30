#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MAXN = 2e5;

void solve(){
	int n;
	cin >> n;
	vector<int> input(n);
	for(int i = 0; i<n; i++){
		cin >> input[i];
	}
	if(input[0] < input[n-1]){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
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