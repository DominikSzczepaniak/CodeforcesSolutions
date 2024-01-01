#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define pi pair<int, int>
#define int long long
const ll MOD = 1e9 + 7;
const int MAX = 1e5;



void solve()
{
	int n;
	cin >> n;
	vector<vector<int>> input(5000, vector<int>(5000));
	int dodajx = n-1;
	int odejmijy = 2;
	vector<int> sumypion(10000, 0);
	vector<int> sumypoziom(10000, 0);
	for(int i = 1; i<=n; i++){
		for(int j = 1; j<=n; j++){
			cin >> input[i][j];
			sumypion[i+j] += input[i][j];
			sumypoziom[i-j+n] += input[i][j];
		}
	}
	int max1 = -1;
	int max2 = -1;
	pair<int, int> id1; //y x
	pair<int, int> id2; // y x
	for(int i = 1; i<=n; i++){
		for(int j = 1; j<=n; j++){
			int ans = sumypion[i+j] + sumypoziom[i-j+n] - input[i][j];
			if((i+j) % 2 == 0 && ans > max1){
				max1 = ans;
				id1 = {i, j};
			}
			if((i+j)%2==1 && ans > max2){
				max2 = ans;
				id2 = {i, j};
			}
			// if(ans >= max1){
			// 	max2 = max1;
			// 	id2 = id1;
			// 	max1 = ans;
			// 	id1 = {i, j};
			// }
			// else{
			// 	if(ans > max2){
			// 		max2 = ans;
			// 		id2 = {i, j};
			// 	}
			// }
		}
	}
	cout << max1 + max2 << endl; // 6 + 
	cout << id1.first << " " << id1.second << " " << id2.first << " " << id2.second << endl;
	
}

int32_t main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	bool testcases = false;
	if (testcases)
	{
		int t;
		cin >> t;
		while (t--)
		{
			solve();
		}
	}
	else
	{
		solve();
	}
	return 0;
}