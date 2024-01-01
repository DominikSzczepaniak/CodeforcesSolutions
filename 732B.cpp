#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

const int MAX = 1e6;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> input(n);
    ll ans = 0;
    for(int i = 0; i<n; i++){
    	cin >> input[i];
    }
    for(int i = 1; i<n; i++){
		int dodaj = max(0, k-input[i]-input[i-1]);
		ans += dodaj;
		input[i] += dodaj;
    }
	cout << ans << endl;
	for(int i : input){
		cout << i << " ";
	}
	cout << endl;

    return 0;
}