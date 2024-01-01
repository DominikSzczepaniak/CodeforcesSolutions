#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MAX = 3 * 10e5;


int main(){
	int n;
	cin >> n;
	map<int, bool> gotkey;
	vector<pair<int, int>> input(n);
	for(int i = 0; i<n; i++){
		int a, b;
		cin >> a >> b;
		input[i] = {a, b};
	}
	int ans = n;
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			if(input[j].second == input[i].first && i != j){
				ans--;
				break;
			}
		}
	}
	cout << ans << endl;

	return 0;	
}