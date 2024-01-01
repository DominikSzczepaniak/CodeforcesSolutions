#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MAX = 3 * 10e5;

int main(){
	int n;
	cin >> n;
	vector<int> input(n);
	int dwiescie=0, sto = 0;
	for(int i = 0; i<n; i++){
		cin >> input[i];
		input[i]==100?sto++:dwiescie++;
	}
	while(dwiescie >= 2){
		dwiescie -= 2;
	}
	while(sto > 2){
		sto-= 2;
	}
	if(dwiescie == 1){
		if(sto == 2){
			cout << "YES" << endl;
			return 0;
		}
		else{
			cout << "NO" << endl;
			return 0;
		}
	}
	if(dwiescie == 0 && sto%2==0){
		cout << "YES" << endl;
		return 0;
	}
	if(dwiescie == 0 && sto ==1){
		cout << "NO" << endl;
		return 0;
	}

	
	
	

	return 0;	
}