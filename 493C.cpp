#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define pi pair<int, int>
const ll MOD = 1e9+7;

struct info{
	int d;
	int team;
};

bool comparator(info a, info b){
	return a.d < b.d;
}

void solve()
{
	int n;
	cin >> n;
	vector<info> input;
	for(int i = 0; i<n; i++){
		int a;
		cin >> a;
		input.pb({a, 1});
	}
	int m;
	cin >> m;
	for(int i = 0; i<m; i++){
		int a;
		cin >> a;
		input.pb({a, 2});
	}
	sort(input.begin(), input.end(), comparator);
	int punktya = n*2;
	int punktyb = m*2;
	int ans = punktya - punktyb;
	pair<int, int> odpowiedz = {punktya, punktyb};
	for(int i = input.size() -1 ;i>=0; i--){
		while(true){
			if(input[i].team == 1){
				punktya += 1;
			}
			else{
				punktyb += 1;
			}
			if(i!= 0 && input[i-1].d == input[i].d){
				i--;
			}
			else{
				break;
			}
		}
		if(punktya - punktyb > ans){
			ans = punktya - punktyb;
			odpowiedz = {punktya, punktyb};
		}
		else if(punktya - punktyb == ans){
			odpowiedz = {punktya, punktyb};
		}
	}
	cout << odpowiedz.first << ":" << odpowiedz.second << endl;


}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	bool testcases = false;
	if (testcases)
	{
		int t;
		cin >> t;
		while (t--)
		{
			solve();
		}
	}
	else
	{
		solve();
	}
	return 0;
}