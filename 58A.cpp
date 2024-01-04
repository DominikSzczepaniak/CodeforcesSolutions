#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define all(c) (c).begin(), (c).end()
#define FOR(i, n, m) for(int i=n; i<m; ++i)
#define INSPLIT(ar) for (auto &it : ar) cin >> it
#define vt(type, name, size) vector<type> name(size)
#define SORT(ar) sort(all(ar))
#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
bool decreasing(int a, int b){ return a>b;}
bool increasing(int a, int b){ return a<b;}
bool is_prime(int n){
    int i, m=0;
    m=n/2;
    for(i = 2; i <= m; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main() {
    string a;
    cin >> a;
    string ans = "";
    int h=0,e=0,l=0,o=0;
    FOR(i,0,a.length()){
        if(a[i] == 'h'){
            if(h==0){
                h++;
                ans+='h';
            }
        }
        if(a[i] == 'e'){
            if(e==0){
                if(h==1){
                    e++;
                    ans+='e';
                }
            }
        }
        if(a[i] == 'l'){
            if(l<2){
                if(e==1){
                    if(h==1){
                        l++;
                        ans+='l';
                    }
                }
            }
        }
        if(a[i] == 'o'){
            if(o==0){
                if(l==2){
                    if(e==1){
                        if(h==1){
                            o++;
                            ans+='o';
                        }
                    }
                }
            }
        }
    }
    if(ans == "hello"){
        cout << "YES";
        return 0;
    }
    cout << "NO";
    return 0;

}