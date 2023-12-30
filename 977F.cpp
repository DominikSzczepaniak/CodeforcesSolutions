#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MAXN = 1000 * 1000;

void solve()
{
	int n;
	cin >> n;
	map<int, int> DP;
	vector<int> input(n);
	int ans = 0;
	int lastel;
	for (int i = 0; i < n; i++)
	{
		cin >> input[i];
		DP[input[i]] = max(DP[input[i]], DP[input[i] - 1] + 1);
		if(ans < DP[input[i]]){
			lastel = input[i];
			ans = DP[input[i]];
		}
	}
	cout << ans << endl;
	vector<int> answer(ans);
	int id = ans-1;
	for(int i = n-1; i>=0; i--){
		if(input[i] == lastel){
			answer[id] = i+1;
			id--;
			lastel--;
		}
	}
	for(int i : answer){
		cout << i << " ";
	}
	cout << endl;
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	// int t;
	// cin >> t;
	// while(t--){
	// 	solve();
	// }
	solve();

	return 0;
}