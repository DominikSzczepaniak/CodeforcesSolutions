#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	int n;
	scanf("%d", &n);
	int input[n];
	for(int i = 0; i<n; i++) scanf("%d", &input[i]);
	vector<int> DP_l(n+1, 1);
	vector<int> DP_r(n+1, 1);
	int ans = 1;
	for(int i = 1; i<n; i++){
		if(input[i] > input[i-1]){
			DP_l[i] = DP_l[i-1] + 1;
		}
		if(input[n-i-1] < input[n-i]){
			DP_r[n-i-1] = DP_r[n-i]+1;
		}
		ans = max(ans, max(DP_r[i], DP_l[i]));
	}
	for(int i = 1; i<n-1; i++){
		if(input[i+1] > input[i-1]){
			ans = max(ans, DP_r[i+1] + DP_l[i-1]);
		}
	}
	printf("%d\n", ans);
	return 0;
}