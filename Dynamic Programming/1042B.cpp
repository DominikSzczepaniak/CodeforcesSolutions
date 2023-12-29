#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // a + b + c 
    // ab + c
    // a + bc
    // abc 
    int n;
    cin >> n;
    map<string, int> prices;
    for(int i = 0; i<n; i++){
        int a;
        string b; 
        cin >> a >> b; 
        sort(b.begin(), b.end());
        if(prices[b] == 0){
            prices[b] = a;
        }
        for(char c : b){
            string h = "";
            h.push_back(c);
            if(prices[h]==0){
                prices[h] = a;
                continue;
            }
            prices[h] = min(prices[h], a);
        }
        prices[b] = min(prices[b], a);
    }
    // cout << "A B C AB BC AC ABC" << endl;
    // cout << prices["A"] << " " << prices["B"] << " " << prices["C"] << " " << prices["AB"] << " " << prices["BC"] << " " << prices["AC"] << " " << prices["ABC"] << endl;
    int wynik = INT_MAX;
    if(prices["AB"]>0&&prices["C"]>0){
        wynik = min(wynik, prices["AB"] + prices["C"]);
    }
    if(prices["BC"]>0&&prices["A"]>0){
        wynik = min(wynik, prices["BC"] + prices["A"]);
    }
    if(prices["AC"]>0&&prices["B"]>0){
        wynik = min(wynik, prices["AC"]+prices["B"]);
    }
    if(prices["A"]>0&&prices["C"]>0&&prices["B"]>0){
        wynik = min(wynik, prices["A"] + prices["B"] + prices["C"]);
    }
    if(prices["ABC"]>0){
        wynik = min(wynik, prices["ABC"]);
    }
    if(wynik == INT_MAX){
        cout << -1 << endl;
    }
    else{
        cout << wynik << endl;
    }

    return 0;
 
}