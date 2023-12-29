#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MAXN = 5e4+5;

bool sprawdz(vector<int>&input){
	for(int i = 0; i<input.size()-1; i++){
		if(input[i] > input[i+1]){
			return false;
		}
	}
	return true;
}

void wypisz(vector<int>&input){
	for(int i : input){
		cout << i << " ";
	}
	cout << endl;
}

void solve(){
	int n;
	cin >> n;
	vector<int> input(n+1);
	for(int i = 1; i<=n; i++){
		cin >> input[i];
	}
	int ans = 0;
	for(int i = 1; i<=n; i++){
		// cout << i << endl;
		// wypisz(input);
		if(sprawdz(input)){
			break;
		}
		ans++;
		if(i%2==1){
			for(int j = 1; j<=n-2; j+=2){
				if(input[j] > input[j+1]){
					// cout << input[j] << " " << input[j+1] << endl;
					swap(input[j], input[j+1]);
				}
			}
		}
		if(i%2==0){
			for(int j = 2; j<=n-1; j+=2){
				if(input[j] > input[j+1]){
					// cout << input[j] << " " << input[j+1] << endl;
					swap(input[j], input[j+1]);
				}
			}
		}
	}
    cout << ans << endl;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    
}