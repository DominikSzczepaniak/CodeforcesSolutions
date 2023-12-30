#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MAXN = 5200;


int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char g[10005];
        scanf(" %s", g);
        string n = (string)g;
        int MAX = 0;
        for(int i = 0; i<n.size(); i++){
            int num = n[i] - '0';
            MAX = max(MAX, num);
        }
        printf("%d\n", MAX);
    }
}