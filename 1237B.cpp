#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
const ll MOD = 1e9+7;

void solve()
{
	queue<int> wjazd;
	queue<int> wyjazd;
	int n;
	cin >> n;
	for(int i = 0; i<n; i++){
		int a;
		cin >> a;
		wjazd.push(a);
	}
	for(int i = 0; i<n; i++){
		int a;
		cin >> a;
		wyjazd.push(a);
	}
	vector<bool> uzyte(n+1, false);
	int ans = 0;
	for(int i = 0; i<n; i++){
		while(uzyte[wjazd.front()]){
			wjazd.pop();
		}
		// cout << wjazd.size() << " " << wyjazd.size() << endl;
		// cout << wjazd.front() << " " << wyjazd.front() << endl;
		if(wyjazd.front() != wjazd.front()){
			uzyte[wyjazd.front()] = true;
			wyjazd.pop();
			ans++;
		}
		else{
			uzyte[wyjazd.front()] = true;
			wjazd.pop();
			wyjazd.pop();
		}
		// for(int j = 1; j<=n; j++){
		// 	cout << uzyte[j] << " ";
		// }
		// cout << endl;
	}
	cout << ans << endl;
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