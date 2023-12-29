#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MAXN = 2e5;
const int MOD = 1e9 + 9;

void solve(){
	int n;
	cin >> n;
    vector<int> input(n);
    bool zeronextone = false;
    int id;
    for(int i = 0; i<n; i++){
        cin >> input[i];
        if(i != 0){
            if(input[i-1] == 0 && input[i] == 1){
                zeronextone = true;
                id = i;
            }
        }
    }
    if(input[n-1] == 0){ //jesli jest droga z n do n+1 to wystarczy isc droga od 1 do n+1 po kolei
        for(int i = 1; i<=n+1; i++){
            cout << i << " ";
        }
        cout << endl;
        return;
    }
    if(input[0] == 0){ // jesli nie ma drogi z n+1 do 1 to musimy zaczac w jedynce bo inaczej nigdy jej nie odwiedzimy
        if(!zeronextone){ // jesli w zadnym przypadku nie ma tak ze obecnie jest droga z i do n+1 i nie ma drogi z n+1 do i+1 to nigdy nie dojdziemy do i+1
            cout << -1 << endl;
            return;
        }
        else{ // jesli jest taka droga to po prostu tak sie przejdzmy nia
            for(int i = 1; i<=id; i++){
                cout << i << " ";
            }
            cout << n+1 << " ";
            cout << id + 1 << " ";
            for(int i = id+2; i<=n; i++){
                cout << i << " ";
            }
            cout << endl;
            return;
        }
    }
    if(input[0] == 1){ // jesli jest droga z n+1 do 1 to idzmy n+1, i, i+1... n
        cout << n+1 << " ";
        for(int i = 1; i<=n; i++){
            cout << i << " ";
        }
        cout << endl;
        return;
    }


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
	// solve();
	return 0;
}