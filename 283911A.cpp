#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define pi pair<int, int>
const ll MOD = 1e9+7;

void solve()
{
	int n, k;
	cin >> n >> k;
	vector<int> input(n);
	for(int i = 0; i<n; i++){
		cin >> input[i];
	}
	for(int i = 0; i<k; i++){
		int a;
		cin >> a;
		int start = 0, end = n-1;
		while(start < end){
			int mid = (start+end)/2;
			if(input[mid] < a){
				start = mid+1;
			}
			else if(input[mid] > a){
				end = mid-1;
			}
			else if(input[mid] == a){
				start = mid;
				end = mid;
			}
		}
		if(input[start] == a){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}


}

int main()
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