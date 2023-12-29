//https://szkopul.edu.pl/problemset/problem/au-E9FH96-3U9rCKhcNsD5n9/site/?key=statement
#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int R = 1<<18;
int T[2*R];

int minquery(int a, int b){
    a += R;
    b += R;
    int wynik = min(T[a], T[b]);
    while(a / 2 != b / 2){
        if(a%2==0){
            wynik = min(wynik, T[a+1]);
        }
        if(b % 2 == 1){
            wynik = min(wynik, T[b-1]);
        }
        a /= 2;
        b /= 2;
    }
    return wynik;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int wysokosci[n];
    map<int, vector<int>> wystapienia;
    memset(T, INT_MAX, sizeof(T));
    for(int i = 0; i<n; i++){
        int a;
        cin >> a >> wysokosci[i];
        wystapienia[wysokosci[i]].push_back(i);
        T[i+R] = wysokosci[i];
    }
    for(int i = R-1; i>=1; i--){
        T[i] = min(T[2*i], T[2*i+1]);
    }

    int plakaty = n;
    map<int, bool> done;
    for(int i = 0; i<n; i++){
        if(wystapienia[wysokosci[i]].size() > 1 && !done[wysokosci[i]]){
            int start = 0;
            int id = 1;
            while(id != wystapienia[wysokosci[i]].size()){
                int startpoint = wystapienia[wysokosci[i]][start];
                int end = wystapienia[wysokosci[i]][id];
                if(minquery(startpoint, end) >= wysokosci[i]){
                    plakaty--;
                    id++;
                }
                else{
                    start = id;
                    id++;
                }
            }
            done[wysokosci[i]] = true;
        }
    }
    cout << plakaty << endl;


    
}