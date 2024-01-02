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
	vector<int> all(2*n);
	FOR(i,0,2*n){
		cin >> all[i];
	}
	SORT(all);
	int sum1=0;
	int sum2=0;
	FOR(i,0,2*n){
		if(i<n){
			sum1+=all[i];
		}
		else{
			sum2+=all[i];
		}
	}
	if(sum1 != sum2){
		for(int element : all){
			cout << element << " ";
		}
	}
	else{
		cout << -1 << endl;
	}
	
	
	
	
	
	
	
	
	

}