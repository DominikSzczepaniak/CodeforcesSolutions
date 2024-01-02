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
	testcases{
		int n;
		cin >> n;
		vector<int> all(n);
		FOR(i,0,n){
			cin >> all[i];
		}
		vector<int> ans;
		int start = 0;
		int end = n-1;
		FOR(i,0,n){
			if(i%2==0){
				ans.pb(all[start]);
				start++;
			}
			else{
				ans.pb(all[end]);
				end--;
			}
		}
		FOR(i,0,n){
			cout << ans[i] << " ";
		}
		cout << endl;
	}
	
	
	

}