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
	int n;
	cin >> n;
	vector<vector<int>> all(n);
	int id = 0;
	for(int i=n*n; i>=(n*n/2)+1; i--){
		all[id].pb(i);
		id++;
		if(id==n){
			id=0;
		}
	}
	for(int i = 1; i<=(n*n/2) ; i++){
		all[id].pb(i);
		id++;
		if(id==n){
			id=0;
		}
	}
	
	FOR(i,0,n){
		FOR(j,0,n){
			cout << all[i][j] << " ";
		}
		cout << endl;
	}
	
	
	
	
	










}