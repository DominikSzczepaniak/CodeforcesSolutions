#include <bits/stdc++.h>
using namespace std;
#define pb push_back
void solve(){
	// policz ile winning streak
	// policz ile losing streak
	// pousuwaj te losing streak od najmniejszych ktorych dlugosc jest <= k
	// wins += k
	// wynik = 2 * wins - winningstreak
	// cout << "NEW" << endl;
	bool winstr = false;
	int n, k;
	cin >> n >> k;
	int win = 0, los = 0;
	int winstreaks = 0;
	string s;
	cin >> s;
	if(s[0] == 'W'){
		winstr = true;
		win++;
		winstreaks++;
	}
	for(int i = 1; i<n; i++){
		if(s[i] == 'W'){
			win++;
			if(!winstr){
				winstr = true;
				winstreaks++;
			}
		}
		else{
			los++;
			if(winstr){
				winstr = false;
			}
		}
	}
	// cout << win << endl;
	// cout << winstreaks << endl;
	vector<int> left(n, 0);
	if(s[0] == 'L'){
		left[0] = 0;
	}
	for(int i = 1; i<n; i++){
		if(s[i] == 'W'){
			continue;
		}
		if(s[i-1] == 'W'){
			left[i] = 1;
		}
		else if(s[i-1] == 'L' && left[i-1] != 0){
			left[i] = left[i-1] + 1;
		}
		else if(s[i-1] == 'L' && left[i-1] != 0){
			left[i] = 0;
		}
	}
	s[n-1] = 0;
	for(int i = n-2; i>=0; i--){
		if(s[i] == 'W'){
			break;
		}
		if(s[i] == 'L'){
			s[i] = 0;
		}
	}
	vector<int> starty;
	for(int i = 0; i<n-1; i++){
		if(left[i+1] == 0 && left[i] != 0){
			starty.pb(left[i]);
		}
	}
	sort(starty.begin(), starty.end());
	// for(int i = 0; i<starty.size(); i++){
	// 	cout << starty[i] << " ";
	// }
	// cout << endl;
	win += k;
	win = min(n, win);
	for(int i = 0; i<starty.size(); i++){
		if(starty[i] <= k){
			k-=starty[i];
			winstreaks--;
		}
	}
	if(win > 0){
		winstreaks = max(winstreaks, 1);
	}
	// cout << win << endl;
	// cout << winstreaks << endl;
	cout << 2 * win - winstreaks << endl;
	



}

int main(){
	std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}