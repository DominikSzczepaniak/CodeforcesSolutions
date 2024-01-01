#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
	
const int MAX = 2 * 10e5;
	
int main(){
	int n;
	cin >> n;
	set<int> input;
	for(int i =0; i<n; i++){
		int a;
		cin >> a;
		input.insert(a);
	}
	for(int i = 1; i<=3001; i++){
		if(input.count(i) == 0){
			cout << i << endl;
			return 0;
		}
	}

	return 0;
}