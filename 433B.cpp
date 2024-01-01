#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MAX = 3 * 10e5;

int main(){
	int n;
	cin >> n;
	vector<ll> input(n);
	vector<ll> druga(n);
	for(int i = 0; i<n; i++){
		cin >> input[i];
		druga[i] = input[i];
	}
	sort(druga.begin(), druga.end());
	vector<ll> suma1(n+1);
	vector<ll> suma2(n+1);
	suma1[0] = 0;
	suma2[0]= 0;
	for(int i = 1; i<=n; i++){
		suma1[i] = suma1[i-1] + input[i-1];
		suma2[i] = suma2[i-1] + druga[i-1];
	}
	int q;
	cin >> q;
	while(q--){
		int z,a,b;
		cin >> z >> a >> b;
		if(z == 1){
			cout << suma1[b] - suma1[a-1] << endl;
		}
		else{
			cout << suma2[b] - suma2[a-1] << endl;
		}
	}
	
	

	return 0;	
}