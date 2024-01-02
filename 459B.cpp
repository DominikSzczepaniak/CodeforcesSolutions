#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define FOR(i, n, m) for(int i=n; i<m; ++i)
#define INSPLIT(ar) for (auto &it : ar) cin >> it
#define SORT(ar) sort((ar).begin(), (ar).end())
#define SORTD(ar) sort((ar).rbegin(), (ar).rend())
#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define testcases int t; cin >> t; while(t--)
#define twodvector(nazwa, size1, size2) vector<vector<int>> nazwa( size1 , vector<int> (size2, 0))
 
int main()
{
	ll n;
	cin >> n;
	vector<ll> all(n);
	map<ll, ll> nums;
	ll maxint=0;
	ll minint=INT_MAX;
	FOR(i,0,n){
		cin >> all[i];
		nums[all[i]]++;
		maxint = max(all[i], maxint);
		minint = min(all[i], minint);
	}
	ll ans = 0;
	if(maxint == minint){
		ans = n*(n-1)/2;
	}
	else{
		ans = nums[maxint] * nums[minint];
	}
	cout << maxint - minint << " " <<ans << endl;



}