//https://szkopul.edu.pl/problemset/problem/4ZH1h7Wr18Yb7B0L7ym_Km0L/site/?key=statement
#include <bits/stdc++.h>
using namespace std;
#define ll long long
deque<pair<ll, ll>> miny;
deque<pair<ll, ll>> maxy;

void wstawMin(ll x, ll pos){
    while(!miny.empty() && miny.back().first >= x){
        miny.pop_back();
    }
    miny.push_back({x, pos});
}

void updateMin(ll pos){
    while(!miny.empty() && miny.front().second < pos){
        miny.pop_front();
    }
}

void wstawMax(ll x, ll pos){
    while(!maxy.empty() && maxy.back().first <= x){
        maxy.pop_back();
    }
    maxy.push_back({x, pos});
}

void updateMax(ll pos){
    while(!maxy.empty() && maxy.front().second < pos){
        maxy.pop_front();
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t, n;
    cin >> t >> n;
    ll input[n];
    for(ll i = 0; i<n; i++){
        cin >> input[i];
    }
    ll bestans = 1;
    //robimy kolejke monotoniczna przechowujaca maxy i miny
    // jesli w jakiejs z kolejek .front() bedzie zbyt duzy / maly to zwiekszamy start o 1, aktualizujac obie kolejki
    // robimy tak dopoki warunek sie bedzie spelnial
    // gdy warunek sie spelnia sprawdzamy bestans
    ll start = 0, end = 0;
    wstawMax(input[0], 0);
    wstawMin(input[0], 0);
    while(start < n && end < n){
        if(maxy.front().first - miny.front().first <= t){
            end++;
            wstawMin(input[end], end);
            wstawMax(input[end], end);
        }
        while(maxy.front().first - miny.front().first > t){
            start++;
            updateMax(start);
            updateMin(start);
        }
        
        bestans = max(bestans, end-start+1);
        // cout << start << " " << end << " " << bestans << endl;
    }
    cout << bestans << endl;
    return 0;
 
}