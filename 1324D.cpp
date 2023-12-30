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
	vector<int> a(n);
	for(int i = 0; i<n; i++){
		cin >> a[i];
	}
	vector<int> b(n);
	for(int i = 0; i<n; i++){
		cin >> b[i];
	}
	vector<int> roznice(n);
	for(int i = 0; i<n; i++){
		roznice[i] = a[i]-b[i];
	}
	sort(roznice.rbegin(), roznice.rend());
	ll ans = 0;
	for(int i = 0; i<n; i++){
		int wartosc = roznice[i];
		int start = i, end = n-1;
		while(start<end){
			int mid = (start+end+1)/2;
			if(roznice[mid] + roznice[i] > 0){
				start = mid;
			}
			else{
				end = mid-1;
			}
		}
		ans += start-i;
	}
	cout << ans << endl;


	
	return 0;
}