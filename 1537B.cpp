#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
const ll MOD = 1e9+7;

void solve()
{
	int n, m, i, j;
	cin >> n >> m >> i >> j;
	int lewa = 2;
	int gora = 2;
	if(j == 1){
		lewa = 0;
	}
	if(i == 1){
		gora = 0;
	}
	if(j == m){
		lewa = 1;
	}
	if(i == n){
		gora = 1;
	}
	if((lewa == 0 || lewa == 1) && (gora == 1 || gora == 0)){
		if(lewa==0 && gora == 0){
			cout << 1 << " " << m << " " << n << " " << m << endl;
			return;
		}
		if(lewa == 1 && gora == 0){
			cout << n << " " << 1 << " " << 1 << " " << 1 << endl;
			return;
		}
		if(lewa==1 && gora == 1){
			cout << 1 << " " << 1 << " " << 1 << " " << m << endl;
			return;
		}
		if(lewa == 0 && gora == 1){
			cout << 1 << " " << m << " " << 1 << " " << 1 << endl;
			return;
		}
	}
	else{
		int od1 = i-1 + j-1; //lewy gorny
		int od2 = n-1 + j-1; //lewy dolny
		int od3 = i-1 + m-1; //prawy gorny
		int od4 = n-1 + m-1; //prawy dolny
		if(max(od1, max(od2, max(od3, od4))) == od1){
			cout << 1 << " " << 1 << " " << n << " " << m << endl;
			return; 
		}
		if(max(od1, max(od2, max(od3, od4))) == od2){
			cout << n << " " << 1 << " " << 1 << " " << m << endl;
			return; 
		}
		if(max(od1, max(od2, max(od3, od4))) == od3){
			cout << n << " " << 1 << " " << 1 << " " << m << endl;
			return; 
		}
		if(max(od1, max(od2, max(od3, od4))) == od4){
			cout << 1 << " " << 1 << " " << n << " " << m << endl;
			return; 
		}

	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	bool testcases = true;
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