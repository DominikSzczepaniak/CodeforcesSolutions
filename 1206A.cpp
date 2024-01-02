#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define FOR(i, n, m) for(int i=n; i<m; ++i)
#define twodvector(nazwa, size1, size2) vector<vector<int>> nazwa( size1 , vector<int> (size2, 0))

int main(){
	int n;
	cin >> n;
	set<int> all;
	vector<int> a(n);
	FOR(i,0,n){
		cin >> a[i];
		all.insert(a[i]);
	}
	int m;
	cin >> m;
	vector<int> b(m);
	FOR(i,0,m){
		cin >> b[i];
		all.insert(b[i]);
	}
	FOR(i,0,n){
		FOR(j,0,m){
			if(all.count(a[i] + b[j]) == 0){
				cout << a[i] << " " << b[j] << endl;
				return 0;
			}
		}
	}
	
	return 0;
}