//https://szkopul.edu.pl/problemset/problem/u14-MJgItr5hoHh2c0EBzDmS/site/?key=statement
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
    int divisor = 501;
    vector<map<int, int>> wystapienia(1000);
    int input[n];
    for(int i = 0; i<n; i++){
        cin >> input[i];
        wystapienia[i/divisor][input[i]]++;
    }
    vector<pair<int, int>> czesci(1000);
    for(int i = 0; i<1000; i++){
        int startczesci = i*divisor;
        int konieczesci = (i+1)*divisor-1;
        if(startczesci > n){
            break;
        }
        pair<int, int> najwiecej = {0, 0};
        for(auto k : wystapienia[i]){
            if(k.first != najwiecej.first){
                if(k.second > najwiecej.second){
                    najwiecej = k;
                }
            }
        }
        czesci[i] = najwiecej;
    }
    for(int i = 0; i<m; i++){
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        pair<int, int> najwiecej = {0, 0};
        int start = a/divisor;
        map<int, int> ile;
        while(b > (a/divisor+1)*divisor - 1){
            ile[czesci[i].first] += czesci[i].second;
            a += divisor;
        }
        for(int i = a; i<=b; i++){
            ile[input[i]]++;
        }
        for(auto k : ile){
            if(k.first != najwiecej.first){
                if(k.second > najwiecej.second){
                    najwiecej = k;
                }
            }
        }
        // cout << najwiecej.first << " " << najwiecej.second << endl;
        // cout << (b-a+1)/2 << endl;
        if(najwiecej.second > (b-a+1)/2){
            cout << najwiecej.first << endl;
        }
        else{
            cout << 0 << endl;
        }
    }




}