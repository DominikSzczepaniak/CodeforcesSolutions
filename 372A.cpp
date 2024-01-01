#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MAX = 1000000000 + 7;
 
int main(){
	int n;
	cin >> n;
	vector<int> input(n);
	for(int i = 0; i<n; i++){
		cin >> input[i];
	}
	sort(input.begin(), input.end());
	int pt = n/2;
	int ans =n;
	for(int i =0; i<n/2; i++){
		while(true){
			if(input[i]*2 <= input[pt]){
				pt++;
				ans--;
				break;
			}
			else{
				pt++;
			}
			if(pt == n){
				break;
			}
		}
		if(pt == n){
			break;
		}
	}
	cout << ans << endl;
 
	return 0;	
}