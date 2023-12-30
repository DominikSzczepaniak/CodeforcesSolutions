#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

const int MAX = 1e6;

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int n;
	cin >> n;
	//sprawdzic czy ten beacon ktory niszczy w normalnej wersji najwiecej beaconow (niech to bedzie x)-> ilosc zniszczonych beaconow > ilosci zniszczonych beaconow od prawej zeby wylaczyc ten beacon, idziemy po ilosci zniszczonych beaconow i zawsze sprawdzamy ten warunek, jesli jest prawdziwy to konczymy
	vector<int> mapa(MAX+5, 0);
	for(int i = 0; i<n; i++){
		int a, b;
		cin >> a >> b;
		mapa[a] = b;
	}
	vector<int> DP(MAX+5, 0);
	if(mapa[0] > 0){
		DP[0] = 1;
	}
	int MAXX = 0;
	for(int i = 1; i<=MAX; i++){
		if(mapa[i] != 0){
			if(mapa[i]-i >= 0){
				DP[i] = 1;
			}
			else{
				DP[i] = DP[i-mapa[i] - 1] + 1;
			}
		}
		else{
			DP[i] = DP[i-1];
		}
		if(DP[i] > MAXX){
			MAXX = DP[i];
		}
	}
	cout << n - MAXX << endl;
	return 0;
}