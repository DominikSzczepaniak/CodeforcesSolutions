#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define FOR(i, n, m) for(int i=n; i<m; ++i)
#define SORT(ar) sort((ar).begin(), (ar).end())
#define SORTD(ar) sort((ar).rbegin(), (ar).rend())
#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define testcases int t; cin >> t; while(t--)
#define twodvector(nazwa, size1, size2, type) vector<vector<type>> nazwa( size1 , vector<type> (size2, 0))



int main()
{	
	int x;
	cin >> x;
	FOR(i,1,x+1){
		FOR(j,1,x+1){
			if(i%j == 0 && i*j > x && i/j < x){
				cout << i << " " << j << endl;
				return 0;
			}
		}
	}
	cout << -1 << endl;
	return 0;
	

}