#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MAXN = 5200;

bool ans = false;
int n;
int input[16];
void rob(int value, int step){
    if(step == n){
        if(value == 0){
            ans = true;
        }
        return;
    }
    rob((value + input[step])%360, step+1);
    rob((value - input[step])%360, step+1);
}

int main(){
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        scanf("%d", &input[i]);
    }
    rob(0, 0);
    if(!ans){
        printf("NO\n");
    }
    else{
        printf("YES\n");
    }
}