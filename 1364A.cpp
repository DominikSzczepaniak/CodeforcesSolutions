#include <bits/stdc++.h>
using namespace std;
#define FOR(i, n, m) for(int i=n; i<m; ++i)
#define twodvector(nazwa, size1, size2) vector<vector<int>> nazwa( size1 , vector<int> (size2, 0))
#define pb push_back
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define SORT(arr) sort(ans.begin(), ans.end()) 

void solve(){ 
	int n, x;
	cin >> n >> x;
	vector<int> all(n);
	int sumall=0;
	int ile=0;
	FOR(i,0,n){
		cin >> all[i];
		sumall+=all[i];
		if(all[i]%x==0){
			ile++;
		}
	}
	if(sumall%x!=0){
		cout << n << endl;
	}
	else if(ile==n){
		cout << -1 << endl;
	}
	else{
		int start=0;
		int koniec = n-1;
		int maxans = 0;
		while(true){
			if(all[start] % x != 0){
				start++;
				break;
			}
			else if(all[koniec] % x != 0){
				koniec--;
				break;
			}
			else{
				start++;
			}
		}
		maxans = koniec-start+1;
		start = 0;
		koniec = n-1;
		while(true){
			if(all[start] % x != 0){
				start++;
				break;
			}
			else if(all[koniec] % x != 0){
				koniec--;
				break;
			}
			else{
				koniec--;
			}
		}
		maxans = max(maxans, koniec-start+1);
		cout << maxans << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}