#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, q, gdzie1 = 0, gdzie2 = 1, a, b;
    cin >> n >> q;
    for(int i = 0; i<q; i++){
        cin >> a;
        if(a == 1){
            cin >> b;
            b %= n;
            gdzie1 += b;
            gdzie2 += b;
            if(gdzie1 < 0){
                gdzie1+=n;
            }
            if(gdzie2 < 0){
                gdzie2 += n;
            }
            gdzie1 %= n;
            gdzie2 %= n;
        }
        else{
            if(gdzie1%2==0){
                gdzie1 = (gdzie1+1)%n;
            }
            else{
                gdzie1 = (gdzie1-1)%n;
            }
            if(gdzie2%2==0){
                gdzie2 = (gdzie2+1)%n;
            }
            else{
                gdzie2 = (gdzie2-1)%n;
            }
        }
    }
    int wyniki[2*n];
    wyniki[gdzie1] = 1;
    wyniki[gdzie2] = 2;
    int licznik1 = 3;
    int licznik2 = 4;
    int pos1 = gdzie1+2;
    int pos2 = gdzie2+2;
    for(int i = 0; i<n/2-1; i++){
        wyniki[pos1%n] = licznik1;
        wyniki[pos2%n] = licznik2;
        licznik2 += 2;
        licznik1 += 2;
        pos1 += 2;
        pos2 += 2;
    }
    for(int i = 0; i<n; i++){
        cout << wyniki[i] << " ";
    }
    cout << endl;
    
    return 0;
}