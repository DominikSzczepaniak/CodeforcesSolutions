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
 
int binarySearch(vector<pair<int, int>> arr, int l, int r, int q){ //l - lewa granica , r - prawa granica
	if(r>=l){
		int mid = (l+r)/2;
		if(arr[mid].second < q){
			binarySearch(arr, mid, r, q);
			return 0;
		}
		else if(arr[mid].first > q){
			binarySearch(arr, l, mid, q);
			return 0;
		}
		else{ // if(arr[mid].first < q && arr[mid].second > q){
			cout << (l+r)/2+1 << endl;
			return 0;
		}
	}
	else{
		return -1;
	}
} 

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    int granice[n];
    FOR(i,0,n){
    	cin >> nums[i];
    	if(i==0){
    		granice[i]= nums[i];
    	}
    	else{
    		granice[i] = granice[i-1]+nums[i];
    	}
    }


    int m;
    cin >> m;
    int q;
    FOR(i,0,m){
    	cin >> q;
    	int low = lower_bound(granice, granice+n, q)-granice;
    	cout << low+1 << endl;
    	

    }
    
    
}