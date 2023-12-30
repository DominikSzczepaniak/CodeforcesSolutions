#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MOD = 1e8;
int main(){
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int n1, n2, MAX[2];
	cin >> n1 >> n2 >> MAX[0]>> MAX[1];
	int k1 = MAX[0], k2 = MAX[1];
	vector<vector<vector<vector<ll>>>> DP(n1+n2+1, vector<vector<vector<ll>>>(n1+1, vector<vector<ll>>(2, vector<ll>(max(k1, k2) + 1, 0))));
	// DP[i][j][k][l] -> i jednostek z czego j zolnierzy a ostatnie jest l zolnierzy typu k 
	ll ans = 0;
	DP[0][0][0][0] = 1;
	for(int i = 0; i<=n1+n2; i++){ //każda ilość żolnierzy
		for(int j = 0; j<=min(i, n1); j++){ //ile jest soldierów
			for(int k = 0; k<=1; k++){ // jakiego typu był ostatni ciąg
				for(int l = 0; l<=MAX[k]; l++){ //jak długi był ostatni ciąg
					if(DP[i][j][k][l] == 0){
						continue;
					}
					if(i==n1+n2){
						ans = (ans%MOD + DP[i][j][k][l]%MOD)%MOD;
					}
					for(int dodaj = 0; dodaj<=1; dodaj++){ //jaki typ żolnierza dodajemy
						ll jj = j;
						if(dodaj == 0){ // jeśli dodajemy zolnierza typu 1 to musimy zwiekszyc j
							jj++;
						}
						if(dodaj == 0){ // ale jesli bedzie ich za duzo no to nie mozna
							if(jj > n1){
								continue;
							}
						}
						else{
							if(i+1 - jj > n2){ // to samo - za duzo to nie mozna
								continue;
							}
						}
						if(dodaj == k){ // jesli typ zolnierza ktory dodajemy pokrywa sie z ostatnim ciagiem zolnierzy to po prostu zwiekszamy dlugosc tego ciagu jesli nie przekrocza maxymalnej mozliwej liczby zolnierzy w ciagu
							if(l+1 <= MAX[dodaj]){
								DP[i+1][jj][k][l+1] = (DP[i+1][jj][k][l+1]%MOD + DP[i][j][k][l]%MOD) % MOD;
							}
						}
						else{ // jesli typ zolnierza nie jest taki sam jak poprzedni ciag
							DP[i+1][jj][dodaj][1] = (DP[i+1][jj][dodaj][1]%MOD + DP[i][j][k][l]%MOD) % MOD; 
						}
					}

				}
			}
		}
	}
	cout << ans << endl;

	return 0;
}