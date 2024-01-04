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
        int n, k;
        cin >> n >> k;
        vector<ll> all(n*k);
        FOR(i,0,n*k){
            cin >> all[i];
        }
        // n = dlugosc pod tablicy
        ll suma = 0;
        int coktora = n/2+1;
        for(int i = (n*k-coktora); i>=n*k-(coktora*k); i-=coktora){  //dodajemy co drugie miejsce od prawej zaczynajac od przedostatniego wyrazu, szukamy k takich liczb       
            suma += all[i];
        }
        cout << suma << endl;
    }

    //zaczynamy od n*k - n liczby 
    // pozniej schodzimy co 2 liczby jesli k jest parzyste
    // co   3 jesli k jest nieparzyste  
}