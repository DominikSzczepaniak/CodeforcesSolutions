#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MAX = 3 * 10e5;

void solve(){
	int n;
	cin >> n;
	vector<int> input(n);
	vector<bool> namiejscu(n+1);
	bool posegregowana = true;
	for(int i = 0;i<n; i++){
		cin >> input[i];
		if(input[i] == i+1){
			namiejscu[i+1] = true;
		}
		if(namiejscu[i+1] == false){
			posegregowana = false;
		}
	}
	// 0 jesli cala tablica jest posegregowana
	// 1 jesli na samym poczatku jest 1 lub na samym koncu jest n i tablica nie jest posegregowana
	// 2 jesli tablica nie jest posegregowana oraz na pierwszym miejscu nie ma 1 ani na ostatnim nie ma n
	if(posegregowana){
		cout << 0 << endl;
		return;
	}
	if(!posegregowana){
		if(input[0] == 1 || input[n-1] == n){
			cout << 1 << endl;
			return;
		}
		if(input[0] == n && input[n-1] == 1){
			cout << 3 << endl;
			return;
		}
		cout << 2 << endl;
		return;
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