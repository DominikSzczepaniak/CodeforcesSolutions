// https://szkopul.edu.pl/problemset/problem/oNnWY6ZuzzhvG-jCmijiXkIk/site/?key=statement
#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct info{
    int a, l, d;
};

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, k;
    cin >> n >> k;
    vector<int> ans(n+5, 0);
    vector<info> input(k);
    for(int i = 0; i<k; i++){
        int a, l, d;
        cin >> a >> l >> d;
        input[i] = {a,l,d};
    }
    int pierwiastek = sqrt(n)+1;
    vector<vector<pair<int, int>>> de(n+5);
    for(int i = 0; i<k; i++){
        int a = input[i].a;
        int l = input[i].l;
        int d = input[i].d;
        if(d >= pierwiastek){
            for(int j = a, licznik = 0; licznik<l; j+=d, licznik++){
                if(j > n){
                    break;
                }
                ans[j]++;
            }
        }
        else{
            de[d].push_back({a, a + d*l});
        }
    }
    vector<int> px(n+5, 0);
    for(int i = 1; i<pierwiastek; i++){
        for(int j = 0; j<=n; j++){
            px[j] = 0;
        }
        if(de[i].size() == 0){
            continue;
        }
        int d = i;
        for(auto j : de[i]){
            int a = j.first, l = j.second;
            px[a]++;
            if(l <= n){
                px[l]--;
            }
        }
        for(int i = 1; i+d<=n; i++){
            px[i+d] += px[i];
        }
        for(int j = 1; j<=n; j++){
            ans[j] += px[j];
        }
    }
    for(int i = 1; i<=n; i++){
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
 
}

