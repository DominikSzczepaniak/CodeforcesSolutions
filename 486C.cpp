#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define pi pair<int, int>
const ll MOD = 1e9 + 7;
const int MAX = 1e5;

int licz(char a, char b){
	char less = (int)a<(int)b?a:b;
	char big = (int)a>(int)b?a:b;
	int diffstraight = (int)big - (int)less;
	// cout << a << " " << b << endl;
	// cout << less << " " << big << endl;
	int diffaround = (int)less - 96 + (122 - (int)big);
	// cout << diffaround << endl;
	return min(diffstraight, diffaround);
}

void solve()
{
	int n, p;
	cin >> n >> p;
	string s;
	cin >> s;
	ll ans = 0;
	p--;
	if(p<n/2){
		reverse(s.begin(), s.end());
		p = n-1-p;
	}
	int l=n+1,r=-5;
	for(int i = 0; i<n/2; i++){
		if(s[i]!= s[n-i-1]){
			l = min(n-i-1, l);
			r = max(n-i-1, r);
			ans += licz(s[i], s[n-i-1]);
		}
	}
	// cout << s << endl;
	// cout << p << endl;
	// cout << l << " " << r << endl;
	if(ans == 0){
		cout << 0 << endl;
		return;
	}
	int odleglosc = 0;
	if(abs(p-l) <= abs(r-p)){
		odleglosc += abs(p-l) + r-l;
	}
	else{
		odleglosc += abs(r-p) + r-l;
	}
	// cout << odleglosc << endl;
	// cout << ans << endl;
	cout << odleglosc + ans << endl;
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