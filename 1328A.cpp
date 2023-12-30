#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
	ll a, b;
	scanf("%lld%lld", &a, &b);
	ll start = 0, end = 1e9/b+5;
	while(start < end){
		ll mid = (start+end)/2;
		if(b * mid < a){
			start = mid+1;
		}
		else{
			end = mid;
		}
	}
	// printf("%lld       ", start); 
	printf("%lld\n", b*start - a);
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--){
		solve();
	}
	return 0;
}