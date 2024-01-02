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
	ll b, k;
	cin >> b >> k;
	vector<ll> a(k);
	FOR(i,0,k){
		cin >> a[i];
	}
	ll ans = 0;
	FOR(i,0,k){
		if(i == k-1){
			if(a[i] % 2 == 0){
				ans += 0;
			}
			else{
				ans += 1;
			}
		}
		else{			
			if(b%2==0 || a[i] % 2 == 0){
				ans+=0;
			}
			else if(b%2==1 && a[i]%2==1){
				ans += 1;
			}
		}
	}
	string x = ans%2==0?"even":"odd";
	cout << x << endl;
	
	
	
	
	
	
	

}