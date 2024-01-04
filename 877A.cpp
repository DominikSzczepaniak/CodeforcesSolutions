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
    string s;
    cin >> s;
    int count = 0;
    FOR(i,0,s.length()){
        if(s[i] == 'A' && s[i+1] == 'n' && s[i+2] == 'n'){
            count++;
        }
        if(s[i] == 'D' && s[i+1] == 'a' && s[i+2] == 'n' && s[i+3] == 'i' && s[i+4] == 'l'){
            count++;
        }
        if(s[i] == 'O' && s[i+1] == 'l' && s[i+2] == 'y' && s[i+3] == 'a'){
            count ++;
        }
        if(s[i] == 'S' && s[i+1] == 'l' && s[i+2] == 'a' && s[i+3] == 'v' && s[i+4] == 'a'){
            count++;
        }
        if(s[i] == 'N' && s[i+1] == 'i' && s[i+2] == 'k' && s[i+3] == 'i' && s[i+4] == 't' && s[i+5] == 'a'){
            count++;
        }
    }
    if(count==1){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}