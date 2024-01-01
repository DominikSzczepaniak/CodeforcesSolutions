#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MAX = 10e6;

typedef pair<int, int> pi;

void solve(){
	int n;
	cin >> n;
	vector<ll> input(n);
	for(int i = 0; i<n; i++){
		cin >> input[i];
	}
	sort(input.rbegin(), input.rend());
	ll alice = 0, bob=0;
	for(int i = 0; i<n; i++){
		if(i % 2 == 0 && input[i]%2==0){
			alice += input[i];
		}
		if(i%2==1 && input[i]%2==1){
			bob += input[i];
		}
	}
	if(bob > alice){
		cout << "Bob" << endl;
	}
	else if(bob == alice){
		cout << "Tie" << endl;
	}
	else{
		cout << "Alice" << endl;
	}
	
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	bool testcases = true;
	if(testcases){
		int t;
		cin >> t;
		while(t--){
			solve();
		}
	}
	else{
		solve();
	}


	return 0;	
}