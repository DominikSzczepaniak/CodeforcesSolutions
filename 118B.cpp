#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
	
const int MAX = 2 * 10e5;
	
int main(){
	int n;
	cin >> n;
	int szerokosc = n*4+1;
	// int wysokosc = szerokosc;
	int wysokosc = 2*n+1;
	vector<vector<int>> all(wysokosc, vector<int>(szerokosc, -5));
	all[n][n*2] = n;
	// for(int i = 1; i<=n; i++){
	// 	all[2*n-(2*i)][2*n] = n-i;
	// 	all[2*n+(2*i)][2*n] = n-i;
	// }
	for(int i = 1; i<=n; i++){
		all[n-i][2*n] = n-i;
		all[n+i][2*n] = n-i;
	}
	for(int i = 0; i<=2*n; i++){
		int a = all[i][2*n];
		for(int j = 0; j<=a; j++){
			all[i][2*n+(2*j)] = a-j;
			all[i][2*n-(2*j)] = a-j;
		}
	}
	for(int i = 0; i<2*n; i++){
		cout << " ";
	}
	cout << 0 << endl;
	for(int i = 1; i<wysokosc-1; i++){
		string s = "";
		int id = n+1;
		int count = 0;
		for(int j = 0; j<szerokosc; j++){
			if(all[i][j] == -5){
				s += " ";
				continue;
			}
			if(all[i][j] == 0){
				count++;
			}
			if(count == 2){
				id = j;
			}
			s+= to_string(all[i][j]);
		}
		cout << s.substr(0, id+1) << endl;
	}
	for(int i = 0; i<2*n; i++){
		cout << " ";
	}
	cout << 0 << endl;
	return 0;
}