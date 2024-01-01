#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MAX = 3 * 10e5;

int main(){
	string s;
	cin >> s;
	vector<int> DP(s.length()+1, 0);
	for(int i = 1; i<s.length(); i++){
		DP[i] = DP[i-1];
		if(s[i-1] == s[i]){
			DP[i]++;
		}
	}
	DP[s.length()] = DP[s.length()-1];
	
	int n;
	cin >> n;
	for(int i = 0; i<n; i++){
		int a, b;
		cin >> a >> b;
		cout << DP[b-1] - DP[a-1] << endl;
	}

	return 0;	
}