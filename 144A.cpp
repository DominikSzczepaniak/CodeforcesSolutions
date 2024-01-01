#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
	
const int MAX = 2 * 10e5;
	
int main(){
	int n;
	cin >> n;
	vector<int> input(n);
	int minV=INT_MAX, idMin, maxV=0, idMax;
	for(int i = 0; i<n; i++){
		cin >> input[i];
		if(minV > input[i]){
			minV = input[i];
			idMin = i;
		}
		else if(minV == input[i]){
			idMin = i;
		}
		if(maxV < input[i]){
			maxV = input[i];
			idMax = i;
		}
	}
	if(idMax > idMin){
		cout << idMax + (n-idMin-2) << endl;
	}
	else{
		cout << idMax + (n-idMin-1) << endl;
	}
	
	
	
	return 0;
}