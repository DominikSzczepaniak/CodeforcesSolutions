#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

const int MAX = 1e6;

void solve(){
	double r, b, z;
	cin >> r >> b >> z;
	int packets = min(r, b);
	if(max(r, b) / packets - 1 <= z){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
}

int main(){
    int t;
	cin >> t;
	while(t--){
		solve();
	}

    return 0;
}