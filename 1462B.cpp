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
		string s;
		cin >> s;
		if(s[0] == '2' && s[n-1] == '0' && s[n-2] == '2' && s[n-3] == '0'){
			cout << "YES" << endl;
		}
		else if(s[0] == '2' && s[1] == '0' && s[n-2] == '2' && s[n-1] == '0'){
			cout << "YES" << endl;
		}
		else if((s[0] == '2' && s[1] == '0' && s[2] == '2' && s[n-1] == '0')){
			cout << "YES" << endl;
		}
		else if((s[0] == '2' && s[1] == '0' && s[2] == '2' && s[3] == '0')){
			cout << "YES" << endl;
		}
		else if((s[n-4] == '2' && s[n-3] == '0' && s[n-2] == '2' && s[n-1] == '0')){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
	
	
	

}