#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main()
{
	int n, d;
	scanf("%d%d", &n, &d);
	vector<pair<ll, ll>> input(n);
	for(int i = 0; i<n; i++){
		int a, b;
		scanf("%d%d", &a, &b);
		input[i] = {a, b};
	}
	sort(input.begin(), input.end());
	vector<ll> DP(n+1);
	DP[0] = 0;
	for(int i = 1; i<=n; i++){
		DP[i] = DP[i-1] + input[i-1].second;
	}
	ll ans = INT_MIN;
	for(int i = 0; i<n; i++){
		int start = i, end = n-1;
		while(start < end){
			int mid = (start+end+1)/2;
			if(input[mid].first-d>=input[i].first){
				end = mid-1;
			}
			else{
				start = mid;
			}
		}
		ans = max(ans, DP[start+1]-DP[i]);
	}
	printf("%lld\n", ans);
	
	

	return 0;
}