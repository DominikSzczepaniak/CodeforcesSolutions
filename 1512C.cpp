#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
string s;

void solve(){
    int zero, one;
    cin >> zero >> one;
    cin >> s;
    if(zero + one != s.length()){
        cout << -1 << endl;
        return;
    }
    if((one + zero) % 2 == 1){
        if(s[s.length()/2] == '?'){
            s[s.length()/2] = one%2==1?'1':'0';
        }
        s[s.length()/2] == '1'?one--:zero--;
    }
    for(int i = 0; i<s.length()/2; i++){
        if((s[i] == '1' && s[s.length()-1-i] == '0') || (s[s.length()-1-i] == '1' && s[i] == '0')){
            cout << -1 << endl;
            return;
        }
        if(s[i] == '1'){
            one--;
        }
        if(s[s.length()-1-i] == '1'){
            one--;
        }

        if(s[i] == '0'){
            zero--;
        }
        if(s[s.length()-1-i] == '0'){
            zero--;
        }

        if(s[i] == '1' && s[s.length()-i-1] == '?'){
            if(one > 0){
                s[s.length()-i-1] = '1';
                one--;
            }
            else{
                cout << -1 << endl;
                return;
            }
        }
        else if(s[i] == '?' && s[s.length()-1-i] == '1'){
            if(one > 0){
                s[i] = '1';
                one--;
            }
            else{
                cout << -1 << endl;
                return;
            }
        }
        else if(s[i] == '0' && s[s.length()-i-1] == '?'){
            if(zero > 0){
                s[s.length()-1-i] = '0';
                zero--;
            }
            else{
                cout << -1 << endl;
                return;
            }
        }
        else if(s[i] == '?' && s[s.length()-1-i] == '0'){
            if(zero > 0){
                s[i] = '0';
                zero--;
            }
            else{
                cout << -1 << endl;
                return;
            }
        }
        if(zero < 0 || one < 0){
            cout << -1 << endl;
            return;
        }

    }
    for(int i = 0; i<s.length()/2; i++){

        if(s[i] == '?' && s[s.length()-1-i] == '?'){
            if(one >= 2){
                s[i] = '1';
                s[s.length()-1-i] = '1';
                one-=2;
            }
            else if(zero >= 2){
                s[i] = '0';
                s[s.length()-1-i] = '0';
                zero-=2;
            }
            else{
                cout << -1 << endl;
                return;
            }
        }
    }
    if(zero != 0 || one != 0){
        cout << -1 << endl;
        return;
    }
    cout << s << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}