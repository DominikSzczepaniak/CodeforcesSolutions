#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


void solve(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n, sum = 0;
     cin >> n;
     vector<ll> a(n);
     for(long long i = 0; i < n; i++){
         cin >> a[i];
         sum += a[i];
     }

    sort(a.begin(), a.end());


     long long m; cin >> m;
    

     for(long long i = 0; i < m; i++){
         long long xmin, ymin;
         cin >> xmin; // x -> def
         cin >> ymin; // y -> atk 


        auto itr = lower_bound(a.begin(), a.end(), xmin);
        long long idx = itr - a.begin();

        // there are 3 cases -> itr == .end(), .begin(), in between

        long long hero1,hold1, ans = LLONG_MAX
                  , hero2, hold2;

                if(itr != a.end()){
                    hero1 = max((long long)0, xmin - (*itr));
                    hold1 =  max((ll)0, ymin - sum + (*itr));
                    ans = min(ans, hero1 + hold1);
                }

                if(itr != a.begin()){
                    hero2 = max((ll)0, xmin - (*prev(itr)));
                    hold2 = max((ll)0, ymin - sum + (*prev(itr)));
                    ans = min(ans, hero2 + hold2);
                }

        

            cout <<  ans << endl;

        
     }
}





int main(){ 

  
    solve();
    


return 0;
}