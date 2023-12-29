#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MAXN = 5e4+5;


int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    cin >> t;
    string s;
    cin.ignore(100, '\n');
    for(int j = 0; j<t; j++){
        getline(cin, s);
        if(s.length()<5){
            cout << "OMG>.< I don't know!" << endl;
        }
        else{
            bool miaostart = (s.substr(0, 5) == "miao.");
            reverse(s.begin(), s.end());
            bool lalaend = (s.substr(0, 5) == ".alal");
            if(lalaend == miaostart){
                cout << "OMG>.< I don't know!" << endl;
            }
            else{
                if(miaostart){
                    cout << "Rainbow's" << endl;
                }
                else{
                    cout << "Freda's" << endl;
                }
            }
        }
        
        
    }
    
}