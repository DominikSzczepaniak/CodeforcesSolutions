#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	scanf("%d", &n);
	vector<int> input(n);
	int sum = 0;
	for(int i = 0; i<n; i++){
		scanf("%d", &input[i]);
		sum += input[i];
	}
	if(sum==0){
		printf("NO\n");
	}
	else{
		if(sum > 0){
			sort(input.rbegin(), input.rend());
		}
		else{
			sort(input.begin(), input.end());
		}
		printf("YES\n");
		for(int i : input){
			printf("%d ", i);
		}
		printf("\n");
	}
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		solve();
	}
	return 0;
}