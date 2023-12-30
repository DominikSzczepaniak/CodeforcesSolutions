#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
	int n, q;
	cin >> n >> q;
	vector<ll> input(n);
	for(int i = 0; i<n; i++){
		cin >> input[i];
	}
	vector<ll> inc(n+2);
	inc[0] = 0;
	inc[n+1] = 0;
	for(int i = 0; i<q; i++){
		int l, r;
		cin >> l >> r;
		inc[l]++;
		inc[r+1]--;
	}
	vector<ll> ile(n+1);
	ll value = 0;
	for(int i =1; i<=n; i++){
		value += inc[i];
		ile[i]= value;
	}
	sort(ile.rbegin(), ile.rend());
	sort(input.rbegin(), input.rend());
	ll ans = 0;
	for(int i = 0; i<n; i++){
		ans += input[i] * ile[i];
	}
	cout << ans << endl;
	return 0;
}