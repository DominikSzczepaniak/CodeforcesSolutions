#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    // cout << "eo" << endl;
    int n;
    char c;
    cin >> n >> c;
    string s;
    cin >> s;
    vector<int> ids;
    for(int i = 0; i<n; i++){
        if(s[i] != c){
            ids.push_back(i+1);
        }
    }
    if(ids.size()==0){
        cout << 0 << endl;
        return;
    }
	int id = ids.size()-1;
	for(int i = n; i>=1; i--){
		if(ids[id] != i && i>n/2){
			cout << 1 << endl;
            cout << i << endl;
			return;
		}
        if(ids[id] != i){
            bool any = false;
            for(int j = i; j<=n; j++){
                if(s[j-1] != c){
                    any = true;
                }
            }
            if(!any){
                cout << 1 << endl;
                cout << i << endl;
                return;
            }
        }
        if(ids[id] == i){
            id--;
        }
	}
    cout << 2 << endl;
    cout << n << " " << n-1 << endl;
    

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }



}
 