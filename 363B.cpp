#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MAX = 3 * 10e5;


int main(){
	int n, k;
	cin >> n >> k;
	vector<int> input(n);
	vector<int> suma(n+1);
	suma[0] = 0;
	for(int i = 0; i<n; i++){
		cin >> input[i];
		suma[i+1] = suma[i] + input[i];
	}	
	int ans = INT_MAX;
	int ansid = 1;
	for(int i = 1; i<=n-(k-1); i++){
		if(suma[i+(k-1)] - suma[i-1] < ans){
			ans = suma[i+(k-1)] - suma[i-1];
			ansid = i;
		}
	}
	cout << ansid << endl;
	

	return 0;	
}