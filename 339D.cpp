#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int n, m;
int R;
vector<int> T;
bool xorParz = false;

void wypisz(){
    for(int i = 1; i<=2*R-1; i++){
        cout << T[i] << " ";
    }
    cout << endl;
}

void build(){
    for(int pot = n-1; pot>=0; pot--){
        for(int i = (1<<pot); i<(1<<(pot+1)); i++){
            if(!xorParz){
                if(pot%2==1){
                    T[i] = T[2*i] ^ T[2*i+1];
                }
                else{
                    T[i] = T[2*i] | T[2*i+1];
                }
            }
            else{
                if(pot%2==1){
                    T[i] = T[2*i] | T[2*i+1];
                }
                else{
                    T[i] = T[2*i] ^ T[2*i+1];
                }
            }
        }
    } 
}

void update(int p, int x, bool lastxor = true){
    p += R-1;
    T[p] = x;
    p/=2;
    while(true){
        if(lastxor){
            T[p] = T[2*p+1] | T[2*p];
            lastxor= false;
        }
        else{
            T[p] = T[2*p+1] ^ T[2*p];
            lastxor = true;
        }
        if(p==1){
            break;
        }
        p/=2;
    }
}

int main(){
    cin >> n >> m;
    R = (1<<n);
    T.resize(2*R+5);
    if(n%2==0){
        xorParz = true;
    }
    for(int i = 0; i<R; i++){
        cin >> T[R+i];
    }
    build();
    for(int i = 0; i<m; i++){
        int a, b;
        cin >> a >> b;
        update(a, b);
        // wypisz();
        cout << T[1] << endl;
    }

}