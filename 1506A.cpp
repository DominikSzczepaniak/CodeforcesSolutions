#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
const ll MAXW = 1e15;

void solve(){
	ll n, m, x;
	cin >> n >> m >> x;
	if(x==1 || n == 1 || m == 1){
		cout << x << endl;
		return;
	}
	ll wiersz = (x-1)%n + 1;
	if(wiersz == 0){
		wiersz = m;
	}
	ll kolumna = (x-1)/n + 1;
	ll value = kolumna +m*(wiersz-1);
	cout << value << endl;



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