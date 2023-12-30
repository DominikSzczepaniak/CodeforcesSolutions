#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll n, m;
	scanf("%lld%lld", &n, &m);
	ll input[n][m];
	for(ll i = 0; i<n; i++){
		for(ll j = 0; j<m; j++){
			scanf("%lld", &input[i][j]);
		}
	}
	vector<vector<ll>> DP(n, vector<ll>(m, 1));
	for (int i=n-1;i>=0;--i){
		for (int j=0;j<m;j++){
			if(i == n-1){
				DP[i][j] = i;
				continue;
			}
			DP[i][j] = DP[i+1][j];
			if(input[i][j] > input[i+1][j]){
				DP[i][j] = i;
			}
		}
	}
	ll ans[n];
	for (int i=n-1;i>=0;--i)
	{
		ll best=0;
		for (int j=0;j<m;j++)
		{
			best=max(best,DP[i][j]);
		}
		ans[i]=best;
	}
	ll q;
	scanf("%lld", &q);
	for(ll i = 0; i<q; i++){
		ll l, r;
		scanf("%lld%lld", &l, &r);
		l--;
		r--;
		if(ans[l] >= r){
			printf("Yes\n");
		}
		else{
			printf("No\n");
		}
	}
	return 0;
}