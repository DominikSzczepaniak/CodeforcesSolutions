#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve(){
	ll n;
	scanf("%lld", &n);
	ll input[n];
	ll MAX = INT_MIN;
	ll MAXDIFF = INT_MIN;
	for(int i = 0; i<n; i++){ 
		scanf("%lld", &input[i]);
		MAX = max(MAX, input[i]);
		MAXDIFF = max(MAXDIFF, MAX - input[i]);
	}
	for(int i = 0; i<=64; i++){
		if((1<<i) - 1 >= MAXDIFF){
			printf("%d\n", i);
			return;
		}
	}
}


int main()
{
	// DP[i] = czas potrzebny zeby liczba i była poprawna
	// input[i+1] < input[i] a DP[i] = DP[i+1] to DP[i+1]++
	int t;
	scanf("%d", &t);
	while(t--){
		solve();
	}
	
	

	return 0;
}