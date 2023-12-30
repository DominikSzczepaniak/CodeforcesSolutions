#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MAXN = 5200;

void solve(){
    char input[55];
    scanf("%s", input);
    string s = (string)input;
    map<char, int> ile;
    int ile1 = 0;
    int ile2 = 0;
    int reszta = 0;
    for(int i = 0; i<s.length(); i++){
        ile[s[i]]++;
        if(ile[s[i]] == 1){
            ile1++;
        }
        else if(ile[s[i]] == 2){
            ile1--;
            ile2++;
        }
        else if(ile[s[i]] == 3){
            reszta++;
            ile2--;
        }
    }
    printf("%d\n", ile1/2 + ile2 + reszta);

    
 
}
 
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        solve();
    }
    return 0;
}