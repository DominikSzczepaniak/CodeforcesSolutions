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
	for(int i = 0;i<n; i++){
		cin >> input[i];
	}
	set<int> one;
	set<int> two;
	for(int i = 1; i<=n; i++){
		one.insert(i);
		two.insert(i);
	}
	one.erase(input[0]);
	two.erase(input[0]);
	vector<int> minimal(n);
	vector<int> maximal(n);
	maximal[0] = minimal[0] = input[0];
	for(int i = 1; i<n; i++){
		if(input[i] > input[i-1]){
			minimal[i] = maximal[i] = input[i];
			one.erase(input[i]);
			two.erase(input[i]);
		}
		else{
			auto c = one.upper_bound(input[i-1]);
			c--;
			int a= *c;
			// cout << i << " " << input[i-1]-1 << " " << a << endl;
			maximal[i] = a;
			one.erase(a);

			int b = *two.upper_bound(0);
			minimal[i] = b;
			two.erase(b);
		}
	}
	for(int i = 0; i<n; i++){
		cout << minimal[i] << " ";
	}
	cout << endl;
	for(int i = 0; i<n; i++){
		cout << maximal[i] << " ";
	}
	cout << endl;



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