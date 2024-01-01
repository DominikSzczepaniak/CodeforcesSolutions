#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
const ll MAXW = 1e15;

void solve(){
	int n;
	cin >> n;
	vector<int> input(n);
	int suma = 0;
	for(int i = 0; i<n; i++){
		cin >> input[i];
		suma += input[i];
	}
	if(suma % n != 0){
		cout << -1 << endl;
		return;
	}
	int cel = suma/n;
	int k = 0;
	for(int i = 0; i<n; i++){
		if(input[i] > cel){
			k++;
		}
	}
	cout << k << endl;



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