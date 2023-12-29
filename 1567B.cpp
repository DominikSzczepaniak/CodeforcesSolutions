#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MAXN = 3e5;

vector<int> xory(1e6);

void gen(){
    xory[0] = 0;
    for(int i = 1; i<=(int)5e5; i++){
        int reszta = i%4;
        if(reszta == 0){
            xory[i] = i;
        }
        if(reszta == 1){
            xory[i] = 1;
        }
        if(reszta == 2){
            xory[i] = i+1;
        }
        if(reszta == 3){
            xory[i] = 0;
        }
    }
}

void solve(){
    int a, b;
    cin >> a >> b;
    int rozmiar = a;
    int xornow = xory[a-1];
    // cout << (xornow ^ a) << "<--" << endl;
    if(xornow == b){
        cout << rozmiar << endl;
    }
    else if((xornow ^ a) != b){
        cout << rozmiar+1 << endl;
    }
    else{
        cout << rozmiar + 2 << endl;
    }
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    gen();
    int t;
    cin >> t;
    while(t--){
        solve();
    }



    
}