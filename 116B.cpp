#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MAX = 3 * 10e5;

vector<pair<int, int>> sides;

int main(){
	sides.pb({1, 0});
	sides.pb({-1, 0});
	sides.pb({0, 1});
	sides.pb({0, -1});
	int n, m;
	cin >> n >> m;
	vector<vector<char>> all(n, vector<char>(m, '.'));
	vector<vector<bool>> visited(n, vector<bool>(m));
	for(int i = 0; i<n; i++){
		for(int j = 0; j<m; j++){
			cin >> all[i][j];
		}
	}
	int ans = 0;
	for(int i = 0; i<n; i++){
		for(int j = 0; j<m; j++){
			if(!visited[i][j] && all[i][j] == 'W'){
				for(int k = 0; k<4; k++){
					int pierw = i + sides[k].first;
					int drugi = j+sides[k].second;
					if(pierw >= 0 && pierw < n && drugi >= 0 && drugi < m && !visited[pierw][drugi] && all[pierw][drugi] == 'P'){
						visited[pierw][drugi] = true;
						ans++;
						break;
					}
				}
			}
		}
	}
	cout << ans << endl;
	

	
	
	

	return 0;	
}