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
	int n;
	cin >> n;
	FOR(i,0,n/2){
		FOR(j,0,n/2-i){
			cout << "*";
		}
		FOR(j,0,2*i+1){
			cout << "D";
		}
		FOR(j,0,n/2-i){
			cout << "*";
		}
		cout << endl;
	}
	FOR(j,0,n){
		cout << "D";
	}
	cout << endl;
	for(int i = n/2-1; i>=0; i--){
		FOR(j,0,n/2-i){
			cout << "*";
		}
		FOR(j,0,2*i+1){
			cout << "D";
		}
		FOR(j,0,n/2-i){
			cout << "*";
		}
		cout << endl;
	}
	
	
	
	
	
	

}