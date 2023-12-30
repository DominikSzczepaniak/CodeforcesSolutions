#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int MAX_N = 5e6 + 100;
int DPANS[MAX_N+5];
int p[MAX_N+5];

int main()
{
	for (int x = 2; x <= MAX_N; x++)
	{
		if(p[x] != 0) continue;
		for (int y = x; y <= MAX_N; y += x){
			if(p[y] == 0){
				p[y] = x;
			}
		}
	}
	DPANS[1] = 0;
	for(int x = 2; x <= MAX_N; x++){
		DPANS[x] = 1 + DPANS[x / p[x]];
	}
	for(int x = 2; x<=MAX_N; x++){
		DPANS[x] += DPANS[x-1];
	}
	int t;
	scanf("%d", &t); //scanf > cin with cinspeedups
	while (t--)
	{
		int a, b;
		scanf("%d%d", &a, &b);
		printf("%d\n", DPANS[a]-DPANS[b]);
	}
	return 0;
}