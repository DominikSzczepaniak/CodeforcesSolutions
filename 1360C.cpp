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
	testcases{
		int n;
		cin >> n;
		int odd = 0, even =0;
		vector<int> nums(n);
		FOR(i,0,n){
			cin >> nums[i];
			if(nums[i]%2==0){
				even++;
			}
			else{
				odd++;
			}
		}
		if(odd%2==0 && even%2==0){
			cout << "YES" << endl;
		}
		else if(odd%2==1 && even%2==1){
			SORT(nums);
			bool y = false;
			FOR(i,1,n){
				if(nums[i] - nums[i-1] == 1){
					y = true;
					break;
				}
			}
			string x = y==true?"YES":"NO";
			cout << x << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}

}