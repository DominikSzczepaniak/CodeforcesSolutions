#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
struct info{
	int num;
	int ilosc;
	int kolor;
};

void solve(){
	int n;
	cin >> n;
	vector<int> input(n);
	for(int i = 0; i<n; i++){
		cin >> input[i];
	}
	int najdluzszypodciag = 0;
	vector<info> ile;
	ile.pb({input[0], 1});
	for(int i = 1; i<n; i++){
		if(input[i] == input[i-1]){
			ile.back().ilosc++;
		}
		else{
			ile.pb({input[i], 1, 0});
		}
		najdluzszypodciag = max(najdluzszypodciag, ile.back().ilosc);
	}
	if(ile.size() == 1){
		cout << 1 << endl;
		for(int i = 0; i<n; i++){
			cout << 1 << " ";
		}
		cout << endl;
		return;
	}
	if(ile.back().num == ile[0].num){
		ile[0].ilosc += ile.back().ilosc;
		najdluzszypodciag = max(najdluzszypodciag, ile[0].ilosc);
		ile.pop_back();
	}
	if(n%2==1 && najdluzszypodciag == 1){
		cout << 3 << endl;
		int kolor = 1;
		for(int i = 0; i<n-1; i++){
			cout << kolor << " ";
			kolor++;
			if(kolor == 3){
				kolor = 1;
			}
		}
		cout << 3 <<endl;
	}
	else if(n%2==1 && najdluzszypodciag >= 2){
		cout << 2 << endl;
		bool zwiniecie = false;
		int kolor = 1;
		int lastkolor = 1;
		cout << 1 << " ";
		kolor++;
		for(int i = 1; i<n; i++){
			if(input[i] == input[i-1] && !zwiniecie){
				cout << lastkolor << " ";
				zwiniecie = true;
				continue;
			}
			cout << kolor << " ";
			lastkolor = kolor;
			kolor++;
			if(kolor == 3){
				kolor = 1;
			}
		}
		cout << endl;
	}
	else if(n%2==0){
		cout << 2 << endl;
		int kolor = 1;
		for(int i = 0; i<n; i++){
			cout << kolor << " ";
			kolor++;
			if(kolor == 3){
				kolor = 1;
			}
		}
		cout << endl;
	}
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