#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define FOR(i, n, m) for(int i=n; i<m; ++i)
#define INSPLIT(ar) for (auto &it : ar) cin >> it
#define SORT(ar) sort((ar).begin(), (ar).end())
#define SORTD(ar) sort((ar).rbegin(), (ar).rend())
#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define testcases int t; cin >> t; while(t--)
#define twodvector(nazwa, size1, size2) vector<vector<int>> nazwa( size1 , vector<int> (size2, 0))

bool check(string x, string y, string c){
	int i =0;
	int one=0, two=0;
	int cont;
	string a;
	while(i<c.length()){
		a="";
		a+=c[i];
		a+=c[i+1];
		if(a == x){
			cont = i+2;
			one = 1;
			break;
		}
		i++;
	}
	while(cont<c.length()){
		a="";
		a+=c[cont];
		a+=c[cont+1];
		if(a == y){
			two = 1;
			break;
		}
		cont++;
	}
	if(one == 1 && two == 1){
		return true;
	}
	else{
		return false;
	}
}


int main()
{
	string s;
	cin >> s;
	if(check("AB", "BA", s) == true || check("BA", "AB", s) == true){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}


}