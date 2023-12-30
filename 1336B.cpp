#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MAXN = 1e5;


ll licz(vector<ll> &r, vector<ll> &g, vector<ll> &b, int red, int green, int blue){
	ll xy = ((r[red]-g[green]) * (r[red]-g[green]));
	ll yz = ((g[green] - b[blue]) * (g[green] - b[blue]));
	ll zx = ((b[blue] - r[red]) * (b[blue] - r[red]));
	return (xy + yz + zx);
}

ll rozwiaz(vector<ll> &r, vector<ll> &g, vector<ll> &b){
	ll ans = INT64_MAX;
	for(int i = 0; i<r.size(); i++){ // r < g < b
		ll wartosc = r[i];
		int start = 0, end =g.size()-1;
		while(start < end){
			int mid = (start+end+1)/2;
			if(g[mid] <= wartosc){
				start = mid;
			}
			else{
				end = mid-1;
			}
		}
		ll green = start;
		wartosc = g[green];
		start = 0, end = b.size()-1;
		while(start < end){
			int mid=(start+end)/2;
			if(b[mid] < wartosc){
				start = mid+1;
			}
			else{
				end = mid;
			}
		}
		ll blue = start;
		ll wynik1 = licz(r, g, b, i, green, blue);
		ans = min({ans, wynik1});
	}
	return ans;
}

void solve()
{
	ll n[3];
	for(int i = 0; i<3; i++){
		cin >> n[i];
	}
	vector<ll> r(n[0]);
	vector<ll> g(n[1]);
	vector<ll> b(n[2]);
	for(int i = 0; i<n[0]; i++){
		cin >> r[i];
	}
	for(int i = 0; i<n[1]; i++){
		cin >> g[i];
	}
	for(int i = 0; i<n[2]; i++){
		cin >> b[i];
	}
	sort(r.begin(), r.end());
	sort(g.begin(), g.end());
	sort(b.begin(), b.end());
	ll ans = INT64_MAX;
	ans = min(ans, rozwiaz(r, g, b));
	ans = min(ans, rozwiaz(r, b, g));
	ans = min(ans, rozwiaz(g, r, b));
	ans = min(ans, rozwiaz(g, b, r));
	ans = min(ans, rozwiaz(b, g, r));
	ans = min(ans, rozwiaz(b, r, g));
	cout << ans << endl;
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
	// solve();

	return 0;
}