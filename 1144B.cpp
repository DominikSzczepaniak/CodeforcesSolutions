#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MAX = (int)3e5;


int main()
{
	int n;
	scanf("%d", &n);
	vector<int> even;
	vector<int> odd;
	for(int i = 0; i<n; i++){
		int a;
		scanf("%d", &a);
		if(a%2==1){
			odd.pb(a);
		}
		else{
			even.pb(a);
		}
	}
	int sizeeven = even.size();
	int sizeodd = odd.size();
	int ans = 0;
	if(sizeodd - 2 >= sizeeven){
		sort(odd.begin(), odd.end());
		for(int i = 0; i<sizeodd - (sizeeven+1); i++){
			ans += odd[i];
		}
		printf("%d", ans);
		return 0;
	}
	if(sizeeven - 2 >= sizeodd){
		sort(even.begin(), even.end());
		for(int i = 0; i<sizeeven - (sizeodd+1); i++){
			ans += even[i];
		}
		printf("%d", ans);
		return 0;
	}
	printf("0");
	

	return 0;
}