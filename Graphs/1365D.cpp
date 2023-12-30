#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MOD = 1e8;

vector<pair<int, int>> vert = {{1, 0}, {0,1}, {-1,0}, {0,-1}};

void solve(){
	// jeśli nie ma żadnego G i żaden B nie jest na (n, m) to zawsze tak
	// jesli nie ma zadnego B i każdy G moze dojsc do (n, m) to zawsze tak
	// zawsze muruj kazdego B nad nim, po lewej, po prawej, i pod nim. jesli kazdy G bedzie mogl uciec to wtedy yes, inaczej no
	int n, m;
	cin >> n >> m;
	int G = 0, B = 0;
	char mapa[n][m];
	vector<pair<int, int>> bandyci;
	bool visited[n][m];
	memset(visited, false, sizeof(visited));
	for(int i = 0; i<n; i++){
		for(int j = 0; j<m; j++){
			cin >> mapa[i][j];
			if(mapa[i][j] == 'G'){
				G++;
			}
			if(mapa[i][j] == 'B'){
				B++;
				bandyci.pb({i, j});
			}
			if(mapa[i][j] == '#'){
				visited[i][j] = true;
			}
		}
	}
	if(G == 0){
		if(B==0){
			cout << "Yes" << endl;
			return;
		}
		if(B > 0 && mapa[n-1][m-1] != 'B'){
			cout << "Yes" << endl;
			return;
		}
	}
	for(int i = 0; i<bandyci.size(); i++){
		int y = bandyci[i].first, x = bandyci[i].second;
		for(auto u : vert){
			int newy = y + u.first, newx = x + u.second;
			if(newy >= n || newy < 0 || newx >= m || newx < 0){
				continue;
			}
			if(mapa[newy][newx] == '.'){
				mapa[newy][newx] = '#';
				visited[newy][newx] = true;
			}
			if(mapa[newy][newx] == 'G'){
				cout << "No" << endl;
				return;
			}
		}
	}
	queue<pair<int, int>> q;
	q.push({n-1, m-1});
	int ileG = 0;
	int ileB = 0;
	while(!q.empty()){
		auto cords = q.front();
		q.pop();
		int y = cords.first, x = cords.second;
		if(mapa[y][x] == 'G'){
			ileG++;
		}
		if(mapa[y][x] == 'B'){
			ileB++;
		}
		for(auto u : vert){
			int newy = y + u.first, newx = x + u.second;
			if(newy >= n || newy < 0 || newx >= m || newx < 0){
				continue;
			}
			if(mapa[newy][newx] != '#' && !visited[newy][newx]){
				visited[newy][newx] = true;
				q.push({newy, newx});
			}
		}
	}
	if(ileG == G && ileB == 0){
		cout << "Yes" << endl;
	}
	else{
		cout << "No" << endl;
	}

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