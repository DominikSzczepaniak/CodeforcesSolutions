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

int main()
{	
	string s;
	cin >> s;
	string add="";
	vector<string> ans;
	FOR(i,0,s.length()){
		if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
			if(add == ""){
				continue;
			}
			ans.pb(add);
			add ="";
		}
		else if(s[i-1] == 'W' && s[i] == 'U' && s[i+1] == 'B'){
			if(add == ""){
				continue;
			}
			ans.pb(add);
			add ="";
		}
		else if(s[i-2] == 'W' && s[i-1] == 'U' && s[i] == 'B'){
			if(add == ""){
				continue;
			}
			ans.pb(add);
			add ="";
		}
		else{
			add += s[i];
		}
	}
	if(add != ""){
		ans.pb(add);
	}
	FOR(i,0,ans.size()){
		cout << ans[i] << " ";
	}
	
	
	
	
	










}