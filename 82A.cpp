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



int main(){
    int n;
    cin >> n;
    int s=1;
    int num = 1;
    int who = 0;
    while(num <= n){
        FOR(i,0,5){
            FOR(j,0,s){
                if(num <=n){
                    num++;
                    who = i;
                }
            }
        }
        s*=2;
    }
    if(who== 0){
        cout << "Sheldon" << endl;
    }
    else if(who == 1){
        cout << "Leonard" << endl;
    }
    else if(who == 2){
        cout << "Penny" << endl;
    }
    else if(who == 3){
        cout << "Rajesh" << endl;
    }
    else if(who == 4){
        cout << "Howard" << endl;
    }
}