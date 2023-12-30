#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	int n;
	scanf("%d", &n);
	ll input[n];
	bool rowne = true;
	ll sum = 0;
	ll MAX = INT_MIN;
	for(int i = 0; i<n; i++){
		scanf("%lld", &input[i]);
		sum += input[i];
		MAX = max(MAX, input[i]);
		if(i >= 1 && input[i] != input[i-1]){
			rowne = false;
		}
	}
	if(rowne){
		printf("YES");
		return 0;
	}
	if( sum % 2 == 0 && sum - MAX >= MAX){
		printf("YES");
	}
	else{
		printf("NO");
	}
	return 0;
}