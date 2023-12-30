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
	cin >> n;
	vector<int> input(n);
	for(int i = 0; i<n; i++){
		cin >> input[i];
	}
	sort(input.begin(), input.end());
	cin >> k;
	for(int i = 0; i<k; i++){
		int l, r;
		cin >> l >> r;
		int startlewy = 0, endlewy = n-1;
		while(startlewy < endlewy){
			int mid = (startlewy+endlewy)/2;//szukamy wiekszej rownej
			if(input[mid] >= l){
				endlewy = mid;
			}
			else{
				startlewy = mid+1;
			}
		}
		int startprawy = 0, endprawy = n-1;
		while(startprawy < endprawy){
			int mid = (startprawy+endprawy+1)/2;
			if(input[mid] > r){
				endprawy = mid-1;
			}
			else{
				startprawy = mid;
			}
		}
		if(startprawy == startlewy){
			if(input[startlewy] >= l && input[startlewy] <= r){
				cout << 1 << " ";
			}
			else{
				cout << 0 << " ";
			}
			continue;
		}
		cout << startprawy - startlewy + 1 << " ";

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