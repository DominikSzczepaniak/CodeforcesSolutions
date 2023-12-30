#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MAXN = 5200;

void solve(){
    char fs[505];
    char ss[1100];
    scanf("%s", fs);
    scanf("%s", ss);
    string s = (string)fs;
    string t = (string)ss;
    int n = s.length();
    for(int i = 0; i<n; i++){
        int idT = 0;
        for(int j = 0; i+j<n; j++){
            if(s[i+j] != t[idT]){
                break;
            }
            if(idT == t.length()-1 && s[i+j] == t[idT]){
                printf("YES\n");
                return;
            }
            int tempId = idT;
            for(int k = 0; i+j-k >= 0; k++){
                if(s[i+j-k] != t[tempId]){
                    break;
                }
                if(tempId == t.length()-1 && s[i+j-k] == t[tempId]){
                    printf("YES\n");
                    return;
                }
                tempId++;
            }
            idT++;
        }
    }
    printf("NO\n");
    
 
}
 
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        solve();
    }
    return 0;
}