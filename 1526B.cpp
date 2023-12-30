#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve(){
	int n;
	cin >> n;
	for(int i = 0; i<1000; i++){
		if(n%11==0){
			cout << "YES" << endl;
			return;
		}
		n-=111;
		if(n<0){
			break;
		}
	}
	cout << "NO" << endl;


}


int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}

	return 0;
}