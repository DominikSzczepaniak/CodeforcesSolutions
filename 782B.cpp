#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
const ll MAX = 60000;
vector<ld> x(MAX+5);
vector<ld> v(MAX+5);
int n;
bool oblicz(ld t){
	ld point = 1e9;
	for(int i = 0; i<n; i++){
		point = min(  x[i] + v[i]*t, point);
	}
	for(int i = 0; i<n; i++){
		if(x[i] > point){
			if(x[i] - v[i]*t > point){
				return false;
			}
		}
	}
	return true;
}

void solve(){
	cin >> n;
	for(int i = 0; i<n; i++){
		cin >> x[i];
	}
	for(int i = 0; i<n; i++){
		cin >> v[i];
	}
	ld start = 0, end = 1e9;
	cout << fixed << setprecision(12);
	int ile = 0;
	ld ans = 0;
	while(start < end){
		ile++;
		ld mid = (start+end)/2;
		if(ile == 140){
			break;
		}
		if(oblicz(mid)){
			end = mid;
		}
		else{
			start = mid;
		}
	}
	cout << start << endl;
} 
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	bool testcases = false;
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