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
	int n,t,k,d;
	cin >> n >> t >> k >> d;
	int czaspodst=0;
	int ciasta = 0;
	while(ciasta < n){
		czaspodst += t;
		ciasta += k;
	}
	vector<int> czasy;
	czasy.pb(t);
	czasy.pb(d+t);
	SORTD(czasy);
	int czas = 0;
	int ciasta2 = 0;
	while(ciasta2 < n){
		int z = czasy.back();
		czas = z;
		czasy.pop_back();
		czasy.pb(z + t);
		ciasta2 += k;
		SORTD(czasy);
	}
	string x = (czas>=czaspodst)? ("NO") : ("YES");
	cout << x << endl;
	
	
	
	
	
	

}