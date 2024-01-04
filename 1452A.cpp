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
    testcases{
        int xr=0, yr=0, dx, dy;
        cin >> dx >> dy;
        int lastoper=6;
        int oper=0;
        if(dx < dy){
            swap(dx, dy);
        }
        while(xr!=dx || yr!=dy){
            if(xr < dx){
                if(lastoper == 2){
                    if(yr<dy){
                        yr++;
                        lastoper = 3;
                        oper++;
                    }
                    else{
                        oper+=2;
                        xr++;
                        lastoper=2;
                    }
                }
                else{
                    xr++;
                    lastoper = 2;
                    oper++;
                }
            }
            else if(yr<dy){
                if(lastoper==3){
                    oper+=2;
                    yr++;
                    lastoper = 3;
                }
                else{
                    lastoper = 3;
                    yr++;
                    oper++;
                }
            }
            //cout << xr << " " << yr << endl;
            //cout << oper << endl;
        }
        cout << oper << endl;
    }
}