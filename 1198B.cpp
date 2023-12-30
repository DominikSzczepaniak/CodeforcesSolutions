#include <bits/stdc++.h>
using namespace std;
#define ll long long

int R = 1 << 18;
int T[2 * (1 << 18)];
int maximum(int l, int r)
{
	l += R;
	r += R;
	int answer = max(T[l], T[r]);

	while (l / 2 != r / 2)
	{
		if (l % 2 == 0)
		{
			answer = max(answer, T[l + 1]);
		}
		if (r % 2 == 1)
		{
			answer = max(answer, T[r - 1]);
		}
		l /= 2;
		r /= 2;
	}
	return answer;
}

int main()
{
	int n;
	scanf("%d", &n);
	int input[n + 1];
	for (int i = 1; i <= n; i++)
		scanf("%d", &input[i]);
	int q;
	scanf("%d", &q);
	vector<int> lastQ(n+1, 0);
	for (int i = 1; i <= q; i++)
	{
		int type;
		scanf("%d", &type);
		T[i + R] = 0;
		if (type == 1)
		{
			int p, x;
			scanf("%d%d", &p, &x);
			lastQ[p] = i;
			input[p] = x;
		}
		else
		{
			int x;
			scanf("%d", &x);
			T[i + R] = x;
		}
	}
	for (int i = R - 1; i >= 1; i--)
	{
		T[i] = max(T[i * 2], T[i * 2 + 1]);
	}
	for (int i = 1; i <= n; i++)
	{
		printf("%d ", max(input[i], maximum(lastQ[i], q+1)));
	}
	return 0;
}