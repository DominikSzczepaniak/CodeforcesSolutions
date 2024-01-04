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
    //freopen("in.txt","r",stdin);
    testcases{
        int check = 0;
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        FOR(i,0,n){
            cin >> a[i];
        }
        FOR(i,0,n){
            cin >> b[i];
        }
        bool tak=true;
        bool start=false;
        bool koniec = false;
        int roznica;
        FOR(i,0,n){
            if(a[i]>b[i]){
                tak=false;
                break;
            }
            else if(a[i] < b[i]){
                if(koniec == false){
                    if(start==true){
                        if(roznica != b[i]-a[i]){
                            tak = false;
                            break;
                        }
                        else{
                            start = true;
                            roznica = b[i]-a[i];

                        }
                    }else{
                        start = true;
                        roznica = b[i]-a[i];

                    }
                }
                else{
                    tak=false;
                    break;
                }
            }
            else{
                if(start==true){
                    koniec=true;
                }
            }
        }
        if(tak == true){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}