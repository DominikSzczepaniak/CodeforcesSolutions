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

long long power(long long a, long long b) { 
    if (b == 0)
        return 1;
    long long res = power(a, b / 2);
    if (b % 2)
        return (res * res * a);
    else
        return (res * res);
}

int main()
{	
	ll dp[50];
	FOR(i,0,50){
		dp[i] = power(3, i);
	}
	
	
	testcases{
		vector<int> used(50);
		bool y =true;
		ll a;
		cin >> a;
		ll cnt = 0;
		int idi =0;
		FOR(i,0,50){
			if(dp[i] > a){
				used[i-1] = 1;
				cnt += dp[i-1];
				idi = i-1; //sprawdzamy najwyzsza potega ktora jest mniejsza / rowna liczbie podanej
				break;
			}
		}
		if(dp[idi] == a){
			cout << dp[idi] << endl;
		}
		else{
			int j = 0;
			while(cnt < a){
				if(used[j] == 0){
					cnt += dp[j];
					used[j] = 1;
				}
				
				if(j==idi && cnt < a){
					y=false;
					break;
				}
				j++;
			}
			
			
			
			j = idi;
			while(cnt >= a){
				if(cnt - dp[j] >= a && used[j] == 1){
					cnt -= dp[j];
					used[j] = 0;
				}
				if(j==0){
					break;
				}
				j--;
			}
			if(y == false){
				cout << dp[idi+1] << endl;
			}
			else{
				cout << cnt << endl;
			}
		}
		
		
		
		
		
	}
	

}