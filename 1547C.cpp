#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve(){
	int k, n, m;
	scanf("%d%d%d", &k, &n, &m);
	int a[n];
	int b[m];
	for(int i = 0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i<m; i++){
		scanf("%d", &b[i]);
	}
	vector<int> ans;
	int numa = 0, numb = 0;
	while(true){
		if(numa >= n && numb >= m){
			break;
		}
		// printf("%d %d %d %d %d\n", a[numa], b[numb], k, numa, numb);
		if(a[numa] <= k && numa < n){
			if(a[numa] == 0){
				k++;
			}
			ans.pb(a[numa]);
			numa++;
		}
		else if(b[numb] <= k && numb < m){
			if(b[numb] == 0){
				k++;
			}
			ans.pb(b[numb]);
			numb++;
		}
		else{
			printf("-1\n");
			return;
		}
	}
	for(int i : ans){
		printf("%d ", i);
	}
	printf("\n");

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