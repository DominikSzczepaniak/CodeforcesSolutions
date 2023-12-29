//https://szkopul.edu.pl/problemset/problem/A3QYXKEiRLgKerciOwA_lbCD/site/?key=statement
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e6+5;
//zrobmy kolejke monotoniczna w ktorej przechowujemy {wysokosc drzewa, miejsce drzewa}
// jesli jakas wysokosc jest mniejsza to dodajemy na koniec
// jesli jakas wysokosc jest rowna lub wieksza od najwiekszej to usuwamy wszystko i ta wysokosc jest najlepsza
// jesli zbior A stanie sie pusty to przerzucamy zbior B do zbioru A

//do zbioru B wrzucamy wartosc dla ktorych wynik dp jest wiekszy o 1 od wyniku dp[zbior A]

deque<pair<int, int>> A;
deque<pair<int, int>> B;
int dp[N];

void updateA(int miejsce, int k){
    while(!A.empty() && A.front().second < miejsce-k){
        A.pop_front();
    }
    if(A.empty()){
        A = B;
    }
}

void updateB(int miejsce, int k){
    while(!B.empty() && B.front().second < miejsce-k){
        B.pop_front();
    }
}

void wrzucA(int wysokosc, int miejsce, int k){
    while(!A.empty() && A.back().first <= wysokosc){
        A.pop_back();
    }
    while(!A.empty() && A.front().second < miejsce-k){
        A.pop_front();
    }
    A.push_back({wysokosc, miejsce});
}

void wrzucB(int wysokosc, int miejsce, int k){
    while(!B.empty() && dp[B.front().second] > dp[A.front().second]+1){
        B.pop_front();
    }
    while(!B.empty() && B.back().first <= wysokosc){
        B.pop_back();
    }
    while(!B.empty() && B.front().second < miejsce-k){
        B.pop_front();
    }
    B.push_back({wysokosc, miejsce});
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int drzewo[n];
    for(int i = 0; i<n; i++){
        cin >> drzewo[i];
    }
    int q;
    cin >> q;
    for(int i = 0; i<q; i++){
        int k;
        cin >> k;
        memset(dp, 1000000, sizeof(dp));
        dp[0] = 0;
        wrzucA(drzewo[0], 0, k);
        for(int j = 1; j<n; j++){
            updateB(j, k);
            updateA(j, k);
            // if(j == 3){
            //     while(q.size()){
            //         cout << A.front().first << endl;
            //         A.pop_front();
            //     }
            //     return 0;
            // }
            if(A.front().first <= drzewo[j]){
                dp[j] = dp[A.front().second]+1;
                wrzucB(drzewo[j], j, k);
            }
            else{
                dp[j] = dp[A.front().second];
                wrzucA(drzewo[j], j, k);
            }
        }
        cout << dp[n-1] << endl;
        A.clear();
        B.clear();
    }
    return 0;
 
}