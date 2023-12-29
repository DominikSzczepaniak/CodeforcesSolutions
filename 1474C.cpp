#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MAXN = 2e5;

void solve(){
	int n;
	cin >> n;
	n *= 2;
	vector<int> input(n);
	map<int, int> ile;
	for(int i = 0; i<n; i++){
		cin >> input[i];
		ile[input[i]]++;
	}
	sort(input.begin(), input.end());
	for(int j = 0; j<input.size(); j++){
		vector<int> zastap = input;
		map<int, int> ilosc = ile;
		int rozmiar = n;
		ilosc[input.back()]--;
		ilosc[input[j]]--;
		zastap.pop_back();
		int x = input.back();
		int ansx = input.back() + input[j];
		rozmiar-= 2;
		vector<pair<int, int>> ans;
		ans.pb({input.back(), input[j]});
		while(rozmiar != 0){
			while(ilosc[zastap.back()] == 0){
				zastap.pop_back();
			}
			int pierwsza = zastap.back();
			int druga = x - pierwsza;
			if(pierwsza == druga && ilosc[pierwsza] < 2){
				break;
			}
			if(ilosc[druga] == 0 || ilosc[pierwsza] == 0){
				break;
			}
			else{
				x = pierwsza;
				ilosc[pierwsza]--;
				ilosc[druga]--;
				rozmiar -= 2;
				ans.pb({pierwsza, druga});
			}
		}
		if(rozmiar == 0){
			cout << "YES" << endl;
			cout << ansx << endl;
			for(auto u : ans){
				cout << u.first << " " << u.second << endl;
			}
			return;
		}
	}
	cout << "NO" << endl;
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}