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
    double n, l;
    cin >> n >> l;
    vector<double> all(n);
    double maxans = 0;
    FOR(i,0,n){
    	cin >> all[i];
    }
    SORT(all);
    FOR(i,0,n){
    	if(i==0){
    		maxans = max(maxans, all[i]);
    		if(n==1){
    			maxans = max(maxans, l-all[i]);
    		}
    	}
    	else if(i==n-1){
    		maxans = max(maxans, (l-all[i]));
    		maxans = max(maxans, (abs(all[i]-all[i-1]))/2     );
    	}
    	else{
    		maxans = max(maxans, (abs(all[i]-all[i-1]))/2     );
    	}
    }
    cout << setprecision(1000) << maxans << endl;

}