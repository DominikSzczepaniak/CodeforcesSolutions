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
    double n,m,b,a;
    cin >> n >> m >> a >> b;
    int cost = 0;
    while(n!=0){
    	if( b < m*a ){
    		if(n>m){
    			n-=m;
    			cost += b;
    		}
    		else{
    			if(a*n > b){
    				cost += b;
    				n = 0;
    			}
    			else{
    				cost += a*n;
    				n = 0;
    			}
    		}
    	}
    	else{
    		cost = a*n;
    		n=0;
    	}
    }
    cout << cost << endl;


}