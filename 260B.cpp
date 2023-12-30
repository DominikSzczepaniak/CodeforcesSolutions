#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MAXN = 5200;

map<string, int> ans;

vector<int> dni = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

void sprawdz(string s){
    if(s[2] == '-' && s[5] == '-' && s[1] != '-' && s[0] != '-' && s[3] != '-' && s[4] != '-' && s[6] != '-' && s[7] != '-'&& s[8] != '-'&& s[9] != '-'){
        // for(char c : s){
        //     printf("%c", c);
        // }
        // printf("\n");
        int dzien = stoi(s.substr(0, 2));
        // printf("%d ", dzien);
        int miesiac = stoi(s.substr(3, 6));
        // printf("%d ", miesiac);
        int rok = stoi(s.substr(7, 11));
        // printf("%d\n", rok);
        if(miesiac >= 1 && miesiac <= 12 && dzien >= 1 && dzien <= dni[miesiac] && rok >= 13 && rok <= 15){
            ans[s]++;
            return;
        }
    }
    else{
        return;
    }
}

int main(){
    char input[100010];
    scanf(" %s", input);
    string s = (string)input;
    for(int i = 0; i<s.length()-9; i++){
        sprawdz(s.substr(i, 10));
    }
    string answer;
    int num = 0;
    for(auto i : ans){
        if(i.second > num){
            answer = i.first;
            num = i.second;
        }
    }
    for(char c : answer){
        printf("%c", c);
    }
    printf("\n");
}