#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MAXN = 1e5;

void solve(){
	// przejsc po literach kazdego stringa jesli w kazdym stringu litera jest taka sama to wtedy answer na tym miejscu jest ta litera. jesli 
	int n, m;
	cin >> n >> m;
	vector<string> input(n);
	for(int i = 0; i<n; i++){
		cin >> input[i];
	}
	for(int i = 0; i<m; i++){
		for(int j = 0; j<26; j++){
			string answer = input[0];
			answer[i] = 'a' + j;
			vector<int> roznice(n);
			for(int k = 0; k<m; k++){
				for(int w = 1; w<n; w++){
					if(input[w][k] != answer[k]){
						roznice[w]++;
					}
				}
			}
			bool moze = true;
			for(int i = 1; i<roznice.size(); i++){
				if(roznice[i] > 1){
					moze = false;
					break;
				}
			}
			if(moze){
				cout << answer << endl;
				return;
			}
		}
	}
	cout << -1 << endl;
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
	// solve();

	return 0;
}