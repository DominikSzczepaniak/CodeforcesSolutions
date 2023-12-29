#include <bits/stdc++.h>
#include <chrono>
#include <cstdint>
#include <thread>
using namespace std;
#define ll long long
#define pb push_back
const int MAXN = 5e4+5;

int S(ll n){
    int sum = 0;
    while(n>0){
        sum += n%10;
        n/=10;
    }
    return sum;
}

int sum(vector<int> liczby){
    int wynik = 0;
    for(int i = 18; i>=0; i--){
        wynik += liczby[i];
    }
    return wynik;
}

void solve(){
    ll n, s;
    cin >> n >> s;
    int suma = S(n);
    if(suma <= s){
        cout << 0 << endl;
        return;
    }
    vector<int> liczby(19);
    for(int i = 18; i>=0; i--){
        liczby[i] = n%10;
        n/=10;
    }
    int id = 18;
    vector<int> odpowiedzi;
    while(suma > s){
        // cout << suma << " " << id << endl;
        if(liczby[id] == 0){
            id--;
            odpowiedzi.pb(0);
            continue;
        }
        // suma -= (liczby[id]);
        odpowiedzi.pb(10-liczby[id]);
        liczby[id-1]++;
        liczby[id] = 0;
        id--;
        while(liczby[id] == 10){
            odpowiedzi.pb(0);
            liczby[id-1]++;
            // suma -= 9;
            liczby[id]=0;
            id--;
        }
        suma = sum(liczby);
    }
    // for(int i = 0; i<=18; i++){
    //     cout << liczby[i];
    // }
    // cout << endl;
    reverse(odpowiedzi.begin(), odpowiedzi.end());
    bool bylocos = false;
    for(int i = 0; i<odpowiedzi.size(); i++){
        if(odpowiedzi[i] == 0 && !bylocos){
            continue;
        }
        bylocos = true;
        cout << odpowiedzi[i];
    }
    cout << endl;
    
    
    

    
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
        int t;
        cin >> t;
        while(t--){
            solve();
        }
        // solve();
    #endif
    
    
}