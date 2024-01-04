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
    int n;
    cin >> n;
    int ile = 0;
    while(n!=0){
        if(n>=100){
            n-=100;
            ile++;
        }
        else if(n>=20){
            n-=20;
            ile++;
        }
        else if(n>=10){
            n-=10;
            ile++;
        }
        else if(n>=5){
            n-=5;
            ile++;
        }
        else if(n>=1){
            n--;
            ile++;
        }
    }
    cout << ile << endl;











}