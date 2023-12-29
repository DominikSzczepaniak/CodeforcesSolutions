#include <bits/stdc++.h>
#include <chrono>
#include <cstdint>
#include <thread>
using namespace std;
#define ll long long
#define pb push_back
const int MAXN = 5e4+5;

long long power(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

int S(int x){
    int suma = 0;
    while(x > 0){
        suma += x%10;
        x /= 10;
    }
    return suma;
}

void solve(){
    set<int> odpowiedzi;
    int a, b, c;
    cin >> a >> b >> c;
    for(int i = 1; i<=81; i++){
        ll x = b * power(i, a, INT64_MAX) + c;
        if(x < int(1e9) && S(x) == i){
            odpowiedzi.insert(x);
        }
    }
    cout << odpowiedzi.size() << endl;
    if(odpowiedzi.size() == 0){
        return;
    }
    for(int i : odpowiedzi){
        cout << i << " ";
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
        solve();
    #endif
    
    
}