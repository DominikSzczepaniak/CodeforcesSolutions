#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MAX = 1e5;


void solve(){
	int n;
	cin >> n;
	vector<int> liczba;
	liczba.pb(1);
	for(int i = 0; i<n; i++){
		int a;
		cin >> a;
		if(i==0){
			cout << liczba[0] << endl;
			continue;
		}
		if(a==1){
			liczba.pb(1);
		}
		else{
			if(a-1 == liczba[liczba.size()-1]){
				liczba[liczba.size()-1] = a;
			}
			else{
				while(a != liczba.back() + 1){
					liczba.pop_back();
				}
				liczba[liczba.size()-1] = a;
			}
			
			
		}
		cout << liczba[0];
		for(int i = 1; i<liczba.size(); i++){
			cout << "." << liczba[i];
		}
		cout << endl;
	}
	
	
		

}


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	bool testcases = true;
	if(testcases){
		int t;
		cin >> t;
		while(t--){
			solve();
		}
	}
	else{
		solve();
	}


	return 0;	
}