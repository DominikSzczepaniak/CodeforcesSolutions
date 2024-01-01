#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MAX = 200000;

typedef pair<int, int> pi;

class Solution{
    public:
    char zadanie;
    void A(){
        int n;
        cin >> n;
		int jedynki = 0, dwojki = 0;
        for(int i = 0; i<n; i++){
			int a;
			cin >> a;
			a==1?jedynki++:dwojki++;
		}
		int suma = jedynki + dwojki*2;
		if(suma % 2 == 1){
			cout << "NO" << endl;
		}
		else{
			int cel = suma/2;
			int alice=0, bob = 0;
			for(int i = 0; i<n; i++){
				if(alice+2 <= cel && dwojki > 0){
					alice+=2;
					dwojki--;
				}
				else if(alice + 1 <= cel && jedynki > 0){
					alice++;
					jedynki--;
				}
				else{
					bob += jedynki + 2*dwojki;
					break;
				}
			}
			if(alice == bob){
				cout << "YES" << endl;
			}
			else{
				cout << "NO" << endl;
			}
		}
    }
    void B(){
        int n;
        cin >> n;
        cout << n << endl;
    }
    void C(){
        int n;
        cin >> n;
        cout << n << endl;
    }
    void D(){
        int n;
        cin >> n;
        cout << n << endl;
    }
    void E(){
        int n;
        cin >> n;
        cout << n << endl;
    }
    void solve(){
        switch(zadanie){
            case 'A':
                A();
                break;
            case 'B':
                B();
                break;
            case 'C':
                C();
                break;
            case 'D':
                D();
                break;
            case 'E':
                E();
                break;
        }

    }
    void testcases(){
        int t;
        cin >> t;
        while(t--){
            solve();
        }
    }
    Solution(char s){
        zadanie = s;
        testcases();
    }
};

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	Solution maine('A');


	return 0;	
}