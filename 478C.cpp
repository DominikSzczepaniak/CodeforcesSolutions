#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define all(c) (c).begin(), (c).end()
#define FOR(i, n, m) for(int i=n; i<m; ++i)
#define INSPLIT(ar) for (auto &it : ar) cin >> it
#define vt(type, name, size) vector<type> name(size)
#define SORT(ar) sort(all(ar))
int maxOfThree(int a, int b, int c)
{
    if (a < b && b > c){
        return b;
    }


    else if (b < a && a > c){
        return a;
    }

    else{
        return c;
    }
}
int minOfThree(int a, int b, int c)
{
    if (a >= b && b <= c){
        return b;
    }


    else if (b >= a && a <= c){
        return a;
    }

    else{
        return c;
    }
}
int main(){
    ll n, ans=0,r,c,b,mx,mn;
    cin >> r >> c >> b;
    mx = maxOfThree(r,c,b);
    mn = minOfThree(r,c,b);
    if(mx-mn<=1){
        cout << (r+c+b)/3;
    }
    else if(mx >= 2*(r+c+b-mx)){
        cout << r+c+b-mx;
    }
    else{
        cout << (r+c+b)/3;
    }

}
 