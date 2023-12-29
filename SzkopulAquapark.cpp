// https://szkopul.edu.pl/problemset/problem/J4wIQqR4YCpTUr-d-in1DKnt/site/?key=statement
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int maxN = 1000;
int maxRozmiar = maxN * 2;
int rozmiar;
int n, r;
//Tablice:
vector<vector<int>> input(maxN, vector<int>(maxN, 0));
vector<vector<int>> obrot(maxRozmiar, vector<int>(maxRozmiar, 0));
vector<vector<ll>> sumy(maxRozmiar, vector<ll>(maxRozmiar, 0));

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
    //Zmienne:
    cin >> n >> r;
    rozmiar = n*2 - 1;


    //Kod glowny:
    for(int j = 0; j<n; j++){
        for(int i = 0; i<n; i++){
            cin >> input[i][j];
            obrot[i+j][j-i + n-1] = input[i][j];
        }
    }
    input.clear();
    sumy[0][0] = obrot[0][0];
    for(int j = 0; j<rozmiar; j++){
        for(int i = 0; i<rozmiar; i++){
            if(i==0 && j==0){
                continue;
            }
            if(i == 0){
                sumy[i][j] = sumy[i][j-1] + obrot[i][j];
                continue;
            }
            if(j==0){
                sumy[i][j] = sumy[i-1][j] + obrot[i][j];
                continue;
            }
            sumy[i][j] = obrot[i][j] - sumy[i-1][j-1] + sumy[i-1][j] + sumy[i][j-1];
        }
    }

    while(r--){
        int x, y, l;
        cin >> x >> y >> l;
        int obecny_x = x - y + n-1;
        int obecny_y = x + y - 2;
        if(l == 0){
            cout << sumy[obecny_y][obecny_x] << endl;
            continue;
        }
 
        int prawy_dolny_x = min(obecny_x+l, rozmiar-1);
        int prawy_dolny_y = min(obecny_y+l, rozmiar-1);

        int lewy_gorny_x = max(obecny_x-l, 0);
        int lewy_gorny_y = max(obecny_y-l, 0);

        if(lewy_gorny_x == 0 && lewy_gorny_y == 0){
            cout << sumy[prawy_dolny_y][prawy_dolny_x] << endl;
            continue;
        }
        if(lewy_gorny_x == 0){
            cout << sumy[prawy_dolny_y][prawy_dolny_x] - sumy[lewy_gorny_y-1][prawy_dolny_x] << endl;
            continue;
        }
        if(lewy_gorny_y == 0){
            cout << sumy[prawy_dolny_y][prawy_dolny_x] - sumy[prawy_dolny_y][lewy_gorny_x-1] << endl;
            continue;
        }
        cout << sumy[prawy_dolny_y][prawy_dolny_x] + sumy[lewy_gorny_y-1][lewy_gorny_x-1] - sumy[prawy_dolny_y][lewy_gorny_x-1] - sumy[lewy_gorny_y-1][prawy_dolny_x] << endl;
    }
	return 0;	
}

