#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

vector<pair<int, int>> vert = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

// void bfs(int x[], int y[]){
// 	queue<pair<int, int>> q;
// 	vector<vector<bool>> visited(3, vector<bool>(3));
// 	vector<vector<int>> dist(3, vector<int>(3, 0));
// 	q.push({y[0], x[0]});
// 	visited[y[0]][x[0]] = true;
// 	while(!q.empty()){

// 	}
// }


void solve(){
	int x[3], y[3];
	for(int i = 0; i<3; i++){
		scanf("%d%d", &x[i], &y[i]);
		// x[i] -= (x[i]-1);
	}
	if(x[0] != x[1] && y[1] != y[0]){
		printf("%d\n", abs(x[1]-x[0]) + abs(y[1] - y[0]));
	}
	else if(x[0] == x[1]){
		int mniejszy = min(y[0], y[1]);
		int wiekszy = max(y[0], y[1]);
		if(y[2] > mniejszy && y[2] < wiekszy && x[2] == x[1]){
			printf("%d\n", abs(y[1] - y[0]) + 2);
		}
		else{
			printf("%d\n", abs(y[1] - y[0]));
		}
	}
	else if(y[0] == y[1]){
		int mniejszy = min(x[0], x[1]);
		int wiekszy = max(x[0], x[1]);
		if(x[2] > mniejszy && x[2] < wiekszy && y[2] == y[1]){
			printf("%d\n", abs(x[1] - x[0]) + 2);
		}
		else{
			printf("%d\n", abs(x[1] - x[0]));
		}
	}


	

}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--){
		solve();
	}
	return 0;
}