#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MAXN = 2e5;

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	ll n;
	cin >> n;
	ll MINANS = INT64_MAX;
	pair<ll, ll> liczby;
	for(ll i = 2; i*i<=n; i++){
		if(n % i == 0){
			ll lcm = ((i * n/i)/__gcd(i, n/i));
			if(max(i, n/i) < MINANS && lcm == n){
				liczby = {i, n/i};
			}
		}
	}
	if(liczby.first == 0 && liczby.second == 0){
		liczby.first = n;
		liczby.second = n;
	}
	cout << liczby.first << " " << liczby.second << endl;
	return 0;
}