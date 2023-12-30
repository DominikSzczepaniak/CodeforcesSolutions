#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
	


}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int n;
	cin >> n;
	map<int, int> wyniki;
	map<int, int> pozycje;
	for(int i = 0; i<n; i++){
		int a;
		cin >> a;
		pozycje[a] = i;
	}
	vector<int> b(n);
	for(int i = 0; i<n; i++){
		cin >> b[i];
	}
	for(int i = 0; i<n; i++){
		int pozycja = pozycje[b[i]];
		if(pozycja < i){
			pozycja += n;
		}
		wyniki[pozycja- i]++;
	}
	int ans = 0;
	for(auto u : wyniki){
		ans = max(ans, u.second);
	}
	cout << ans << endl;




	
	return 0;
}