#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back


int main(){
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int n;
	cin >> n;
	vector<double> input(n);
	for(int i = 0; i<n; i++){
		cin >> input[i];
	}
	vector<int> ceils(n);
	ll sum = 0;
	for(int i = 0; i<n; i++){
		ceils[i] = ceil(input[i]);
		sum += ceils[i];
	}
	int i = 0;
	while(sum > 0){
		if(floor(input[i]) == input[i]){
			cout << ceils[i] << endl;
			i++;
			continue;
		}
		cout << floor(input[i]) << endl;
		
		i++;
		sum--;
	}
	for(int j = i; j<n; j++){
		cout << ceils[j] << endl;
	}
	return 0;
}