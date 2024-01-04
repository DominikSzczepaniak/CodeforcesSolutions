#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){

    int t, ilosc;
    cin >> t;
    if(t%2==0){
        ilosc = t/2 * t;
    }
    else{
        ilosc = ((t/2 + 1) * (t/2 + 1)) + ((t/2) * (t/2));
    }
    cout << ilosc << endl;
    for(int i=0; i<t; ++i){
        for(int j=0; j<t; ++j){
            if(i%2==0 && j%2==0||i%2==1 && j%2==1){
                cout << "C";
            }
            else{
                cout << ".";
            }
        }
        cout << endl;
    }
}