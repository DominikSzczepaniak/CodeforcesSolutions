#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MAXN = 1000*1000;

void solve(){
	// dla kazdej pary liczb przedzialy z najmniejsza wartoscia ktora moze osiagnac po 1 ruchu i najwieksza wartoscia ktora moze osiagnac po 1 ruchu
	// a = pierwsza wartosc z pary tj. input[i], b druga wartosc z pary tj. input[n-i+1]
	// czyli najmniejsza wartosc -> min(a, b) + 1
	// najwieksza wartosc -> max(a,b) + k
	// pozniej sprawdzić najwieksza ilosc wystapien jakiegos punktu + ile par dawało ten wynik -> cel do ktorego sprowadzic pary, sprawdzic pozniej ile zmian potrzeba aby to osiagnac a to daje wynik.
	int n, k;
	cin >> n >> k;
	vector<int> input(n+1);
	for(int i = 1; i<=n; i++){
		cin >> input[i];
	}
	vector<int> przedzialy(2*k+5);
	vector<int> wyniki(2*k+5);
	for(int i = 0; i<=2*k+5; i++){ // O(1e6)
		przedzialy[i] = 0;
		wyniki[i] = 0;
	}
	for(int i = 1; i<=n/2; i++){ // O(n/2 -> 1e5)
		int a = input[i], b = input[n-i+1];
		wyniki[a+b]++;
		przedzialy[min(a, b) + 1]++;
		przedzialy[max(a,b)+k+1]--;
	}
	for(int i = 2; i<=2*k; i++){ // O(2*k -> 4e5)
		przedzialy[i] = przedzialy[i-1] + przedzialy[i];
	}
	int bestans;
	int wynik = 0;
	for(int i = 2; i<=2*k; i++){ // O(2*k -> 4e5)
		if(przedzialy[i]+wyniki[i] > wynik){
			wynik = przedzialy[i] + wyniki[i];
			bestans = i;
		}
	}
	int answer = 0;
	for(int i = 1; i<=n/2; i++){ // O(n/2 -> 1e5)
		int a = input[i], b = input[n-i+1];
		if(a + b == bestans){
			continue;
		}
		if(min(a,b) + k >= bestans && min(a, b) + 1 <= bestans){
			answer++;
			continue;
		}
		else if(max(a, b) + 1 <= bestans && max(a, b) + k >= bestans){
			answer++;
			continue;
		}
		else{
			answer += 2;
			continue;
		}
	}
	cout << answer << endl;	
	//sum -> O(1e6) + O(n/2 -> 1e5) + O(2*k -> 4e5) + O(2*k -> 4e5) + O(n/2 -> 1e5) = O(1e6) + O(1e5) + O(4e5) + O(4e5) + O(1e5) = O(2.1e6) ~~ O(1e6)

}

int main(){
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