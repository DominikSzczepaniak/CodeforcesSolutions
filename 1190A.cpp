#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back


int main(){
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	ll n, m, k;
	cin >> n >> m >> k;
	vector<ll> items(m);
	for(ll i = 0; i<m; i++){
		cin >> items[i];
	}
	ll deleted = 0;
	ll ans = 0;
	for(ll i = 0; i<m; i++){
		ll start = i, end = m;
		ll endpos = ceil((double(items[i]) - double(deleted)) / double(k));
		endpos *= k;
		while(start < end){
			ll mid = (start+end+1)/2;
			if(items[mid] - deleted > endpos){
				end = mid-1;
			}
			else{
				start = mid;
			}
		}
		ll ile = start - i + 1;
		deleted += ile;
		i += ile-1;
		ans++;
	}
	cout <<ans<<endl;
	return 0;
}