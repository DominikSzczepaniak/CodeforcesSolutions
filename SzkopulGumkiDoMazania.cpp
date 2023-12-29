// https://szkopul.edu.pl/problemset/problem/CNrWfGt3eL5nu1HJ_Og05_v4/site/?key=statement
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
    //greedy brac jak najwieksze litery (z -> a), jesli w kazdym stringu stoja najwiekszej wartosci ostatniej litery
    int n;
    cin >> n;
    vector<string> input(n);
    vector<int> start(n, 0);
    for(int i = 0; i<n; i++){
        cin >> input[i];
    }
    string ans = "";
    int maxlitera = 122;
    vector<int> gdzie(n);
    while(maxlitera >= 97){
        int ile = 0;
        for(int i = 0; i<n; i++){
            bool jest = false;
            for(int j = start[i]; j<input[i].length(); j++){
                if((int)input[i][j] ==maxlitera){
                    gdzie[i] = j;
                    jest = true;
                    break;
                }
            }
            if(!jest){
                maxlitera--;
            }
            else{
                ile++;
            }
        }
        if(ile == n){
            ans += (char)maxlitera;
            for(int i = 0; i<n; i++){
                start[i] = gdzie[i]+1;
                if(start[i] == input[i].length()){
                    if(ans[0] == 'a'){
                        cout << "bitek" << endl;
                        return 0;
                    }
                    cout << ans << endl;
                    return 0;
                }
            }
        }
    }
    string bitek = "bitek";
    if(ans[0] == 'a'){
        cout << bitek << endl;
        return 0;
    }
    for(int i = 0; i<ans.size(); i++){
        if(i==5){
            cout << ans << endl;
            break;
        }
        if(ans[i] < bitek[i]){
            cout << bitek << endl;
            break;
        }
        else if(ans[i] > bitek[i]){
            cout << ans << endl;
            break;
        }
    }


	return 0;	
}

