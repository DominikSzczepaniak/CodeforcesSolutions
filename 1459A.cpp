#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define FOR(i, n, m) for(int i=n; i<m; ++i)
#define SORT(ar) sort((ar).begin(), (ar).end())
#define SORTD(ar) sort((ar).rbegin(), (ar).rend())
#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define testcases int t; cin >> t; while(t--)
#define twodvector(nazwa, size1, size2) vector<vector<int>> nazwa( size1 , vector<int> (size2, 0))

void solve(){
	testcases{
		int n;
		cin >> n;
		vector<int> red(n);
		vector<int> blue(n);
		string s;
		cin >> s;
		string x;
		cin >> x;
		FOR(i,0,n){
			red[i] = s[i]-'0';
			blue[i]= x[i] - '0';
		}
		int b = 0;
		int r = 0;
		FOR(i,0,n){
			if(red[i] > blue[i]){
				r++;
			}
			else if(red[i] < blue[i]){
				b++;
			}
			else{
				b++;
				r++;
			}
		}
		if(r==b){
			cout << "EQUAL" << endl;
		}
		else{
			if(r>b){
				cout << "RED" << endl;
			}
			else{
				cout << "BLUE" << endl;
			}
		}
	}
}

int main()
{
	solve();

}