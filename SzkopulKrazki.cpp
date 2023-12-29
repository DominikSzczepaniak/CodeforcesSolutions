//https://szkopul.edu.pl/problemset/problem/fYXVXOreVxlXTRoHZJXyXF2l/site/?key=statement
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    if(m > n){
        cout << 0 << endl;
        return 0;
    }
    vector<pair<int, int>> szerokosci(n); //od poczatku do konca
    for(int i = 0; i<n; i++){
        int a;
        cin >> a;
        szerokosci[i] = {a, n-i};
    }
    int minima[n];
    minima[0] = szerokosci[0].first;
    for(int i = 1; i<n; i++){
        minima[i] = min(minima[i-1], szerokosci[i].first);
    }
    int last = n-1;
    for(int i = 0; i<m; i++){
        int x;
        cin >> x;
        int start = 0, end = last;
        if(last == -1){
            cout << 0 << endl;
            return 0;
        }
        while(start < end){
            int mid = (start+end+1)/2;
            if(minima[mid] >= x){
                start = mid;
            }
            else{
                end = mid-1;
            }
        }
        if(minima[start] >= x){
            last = start-1;
        }
        if(minima[start] < x && start == 0){
            cout << 0 << endl;
            return 0;
        }
        
    }
    cout << last+2 << endl;
    
}