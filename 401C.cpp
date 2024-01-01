#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
const ll MOD = 1e9 + 7;


void solve()
{
	int n, m;
	cin >> n >> m; // n -> 0, m -> 1
	double wymagane_zera = ceil((double)m/2)-1;
	if(3*m <= n || wymagane_zera > n){
		cout << -1;
		return;
	}
	int dodatkowe_zera = n - ((m/2)-1);
	if(m < 2){
		if(m == n){
			cout << "01" << endl;
		}
		else if(m>n){
			cout << "101" << endl;
		}
		else{
			cout << "010" << endl;
		}
		return;
	}
	string s = "11";
	m -= 2;
	while(true){
		if( n >= 1 && m >= 2){
			s += "011";
			n-=1;
			m-=2;
		}
		else if(n >= 1 && m>=1){
			s += "01";
			n--;
			m--;
		}
		else{
			break;
		}
	}
	string ans = "";
	// cout << ans << endl;
	for(int i = 0; i<s.length(); i++){
		if(i == 0 && n >= 1 && s[0] == '1'){
			ans += "0";
			ans += s[i];
			// cout << "0" << s[i];
			n--;
			continue;
		}
		if(s[i-1] == '1' && s[i] == '1' && n >= 1){
			// cout << "0";
			ans += "0";
			n--;
		}
		ans += s[i];
		// cout << s[i];
	}
	// cout << m << endl;
	if(n>=1){
		if(n==1){
			ans += "0";
			// cout << "0" << endl;
		}
		else{
			cout << -1 << endl;
			return;
		}
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