#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MAX = (int)3e5;

vector<pair<int, int>> vert = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

int main()
{
	int n;
	scanf("%d", &n);
	vector<vector<char>> grid(n, vector<char>(n));
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			scanf(" %c", &grid[i][j]);
		}
	}
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			int count = 0;
			for(pair<int, int> k : vert){
				int y = i + k.first;
				int x = j+ k.second;
				if(y >= n || y < 0 || x >= n || x < 0){
					continue;
				}
				else{
					if(grid[y][x] == 'o'){
						count++;
					}
				}
			}
			if(count % 2 == 1){
				printf("NO\n");
				return 0;
			}
				
		}
	}
	printf("YES\n");
	
	

	return 0;
}