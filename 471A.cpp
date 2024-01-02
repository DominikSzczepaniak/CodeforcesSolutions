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
#define twodvector(nazwa, size1, size2, type) vector<vector<type>> nazwa( size1 , vector<type> (size2, 0))



int main()
{	
	vector<int> all(6);
	map<int, int> sticks;
	int leg =-2;
	FOR(i,0,6){
		cin >> all[i];
		sticks[all[i]]++;
		if(sticks[all[i]] == 4){
			leg = all[i];
		}
	}
	if(leg == -2){
		cout << "Alien" << endl;
		return 0;
	}
	int ile = 0;
	FOR(i,0,6){
		if(all[i] == leg){
			all[i] = -5;
			ile++;
		}
		if(ile == 4){
			break;
		}
	}
	int a, b;
	FOR(i,0,6){
		if(all[i] != -5){
			if(a != all[i]){
				a = all[i];
			}
			else{
				b = all[i];
			}
		}
	}
	if(a==b){
		cout << "Elephant" << endl;
	}
	else{
		cout << "Bear" << endl;
	}
	
	
	

}