//https://szkopul.edu.pl/problemset/problem/07Q0fFk7fU2TmGr6wpPeDCZj/site/?key=statement
#include <bits/stdc++.h>
using namespace std;
#define ll long long
deque<pair<ll, ll>> q;

void push(ll x, ll idx, ll place){
    while(q.size() && q.back().first <= x){
        q.pop_back();
    }
    while(q.size() && q.front().second < place){
        q.pop_front();
    }
    q.push_back({x, idx});
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, m, d;
    cin >> n >> m >> d;
    ll w[n+1];
    ll sumy[n+1];
    sumy[0] = 0;
    for(ll i = 1; i<=n; i++){
        cin >> w[i];
        sumy[i] = sumy[i-1] + w[i];
    }
    if(d >= n){
        cout << n << endl;
        return 0;
    }
    ll suma = 0;
    ll bestans = d;
    ll end = d;
    push(sumy[1+d-1], 1, 1);
    suma += sumy[end];
    for(ll start = 1; start<=n; start++){
        end = max(end, start+d-1);
        push(sumy[end+1] - sumy[end+1-d], end-d+1, start);
        while(end+1<=n && sumy[end+1]-sumy[start-1] - q.front().first <= m){
            end++;
            push(sumy[end+1] - sumy[end+1-d], end-d+1, start);
        }
        bestans = max(bestans, end-start+1);
    }
    cout << bestans << endl;
}
