#include <bits/stdc++.h>
#include <chrono>
#include <cstdint>
#include <thread>
using namespace std;
#define ll long long
#define pb push_back
const int MAXN = 5e4+5;

void solve(){
    string s;
    cin >> s;
    int ans = 0;
    for(int i = 0; i<=9; i++){
        for(int j = 0; j<=9; j++){
            int len = 0;
            bool ii = true;
            for(int k = 0; k<s.length(); k++){
                int num = s[k] - '0';
                if(num == i && ii){
                    len++;
                    ii = !ii;
                }
                else if(num == j && !ii){
                    len++;
                    ii = !ii;
                }
            }
            if(!ii && i!=j){
                len--;
            }
            ans = max(ans, len);

        }
    }
    cout << s.length() - ans << endl;
    
    
    

    
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