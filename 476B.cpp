#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
const ll MAXW = 1e5;
vector<ll> DP(MAXW);
ll ile = 0;
ll good = 0;
ll koniec = 0;
string s1;
string s2;
void wykonaj(ll miejsce = 0, int krok = 0){
	if(krok == s2.length()){
		if(miejsce==koniec){
			good++;
		}
		ile++;
		return;
	}
	if(s2[krok] == '-'){
		wykonaj(miejsce-1, krok+1);
	}
	else if(s2[krok] == '+'){
		wykonaj(miejsce+1, krok+1);
	}
	else{
		wykonaj(miejsce+1, krok+1);
		wykonaj(miejsce-1, krok+1);
	}
}

void solve(){
	cin >> s1;
	cin >> s2;
	for(int i = 0; i<s1.length(); i++){
		if(s1[i] == '+'){
			koniec++;
		}
		else{
			koniec--;
		}
	}
	wykonaj();
	cout << fixed << setprecision(10);
	cout << (double)good/(double)ile << endl;
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