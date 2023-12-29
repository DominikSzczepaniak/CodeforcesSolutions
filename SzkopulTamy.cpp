// https://szkopul.edu.pl/problemset/problem/vjNqpia6QTMVAmkfml9VonDX/site/?key=statement
#include <bits/stdc++.h>
#include <chrono>
#include <thread>
#include <cstdint>
using namespace std;
#define ll long long
#define pb push_back
const int MAXN = 1e6;
int w[MAXN+5];
int c[MAXN+5];
int n;


bool mozna(int x, bool zmiana = false){
    if(zmiana){
        if(c[0]*x > w[0] || c[n-2]*x > w[n-1]){
            return true;
        }
    }
    else{
        if(c[0]*x > w[0] || c[n-1]*x > w[n]){
            return true;
        }
    }
    //pytaniem jest czy jak sie przelewa to czy po rowno w obie strony czy dziele na pol?
    //jak ide w prawo to +1, jak w lewo to tyle samo
    int srodek = (n+1)/2-1;
    pair<int, int> lewa, prawa;
    lewa = {0, srodek};
    prawa = {0, srodek};
    bool left = false;
    // cout << x << endl;
    // cout << "lewa" << endl;
    while(lewa.second != -1){
        // cout << lewa.first << " " << lewa.second << endl;
        if(lewa.second == 0){
            if(lewa.first + x*c[lewa.second] > w[lewa.second]){
                return true;
            }
            break;
        }
        int wysokosc = lewa.first + x*c[lewa.second];
        if(wysokosc <= w[lewa.second]){
            lewa = {0, lewa.second-1};
        }
        else{
            wysokosc -= w[lewa.second];
            lewa = {wysokosc, lewa.second-1};
        }
    }
    // cout << "prawa"<<endl;
    while(prawa.second != n+1){
        // cout << prawa.first << " " << prawa.second << endl;
        if(prawa.second == n){
            if(prawa.first + x*c[n-1] > w[n]){
                return true;
            }
            return false;
        }
        int wysokosc = prawa.first + x*c[prawa.second];
        if(wysokosc <= w[prawa.second+1]){
            return false;
        }
        else{
            wysokosc -= w[prawa.second+1];
            prawa = {wysokosc, prawa.second+1};
        }
    }

}

void solve(){
    cin >> n;
    bool zmiana = false;
    for(int i = 0; i<n+1; i++){
        cin >> w[i];
    }
    for(int i = 0; i<n; i++){
        cin >> c[i];
    }
    if(n%2==0){
        w[n+1] = -1;
        c[n] = 0;
        n++;
        zmiana = true;
    }
    int start = 0, end = 1e6+5;
    while(start < end){
        int mid = (start+end)/2;
        // cout << mid << endl;
        if(zmiana){
            if(mozna(mid, true)){
                end = mid;
            }
            else{
                start = mid+1;
            }
            continue;
        }
        if(mozna(mid)){
            end = mid;
        }
        else{
            start = mid+1;
        }
    }
    cout<<start <<endl;

}



int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    #ifdef localt
        using std::chrono::high_resolution_clock;
        using std::chrono::duration_cast;
        using std::chrono::duration;
        using std::chrono::milliseconds;
        auto t1 = high_resolution_clock::now();
        int t;
        cin >> t;
        while(t--){
            solve();
        }
        auto t2 = high_resolution_clock::now();
        duration<double, std::milli> ms_double = t2 - t1;
        cout << ms_double.count() << " ms" << endl;
    #elif local
        using std::chrono::high_resolution_clock;
        using std::chrono::duration_cast;
        using std::chrono::duration;
        using std::chrono::milliseconds;
        auto t1 = high_resolution_clock::now();
        solve();
        auto t2 = high_resolution_clock::now();
        duration<double, std::milli> ms_double = t2 - t1;
        cout << ms_double.count() << " ms" << endl;
    #else
        // int t;
        // cin >> t;
        // while(t--){
        //     solve();
        // }
        solve();
    #endif
    
    
}