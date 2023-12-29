// https://szkopul.edu.pl/problemset/problem/TYf8i2qvrGI0l8QHEYJXO5dG/site/?key=statement
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int s, w;
    cin >> s >> w;
    int n;
    cin >> n;
    vector<pair<int, int>> samorodki(n);
    for(int i = 0; i<n; i++){
        int x, y;
        cin >> x >> y;
        samorodki[i] = {x, y};
    }
    sort(samorodki.begin(), samorodki.end());
    int bestans = 0;
    for(int i = 0; i<n; i++){
        int x = samorodki[i].first, y = samorodki[i].second;
        int wynik = 0;
        //zapisac jaki byl najwyzszy i pozniej przejsc poziomowo nizej czy jest jakis nizej ktory tez mozna dodac
        int najwyzszy = y;
        for(int j = i; j<n; j++){
            if(samorodki[j].first-x > s){
                break;
            }
            if(samorodki[j].first-x <= s && samorodki[j].first-x >= 0 && samorodki[j].second-y <= w && samorodki[j].second-y>=0){
                najwyzszy = max(najwyzszy, samorodki[j].second);
                wynik++;
            }
        }
        int ilewdol = y+w-najwyzszy;
        for(int j = i; j<n; j++){
            if(samorodki[j].first - x > s){
                break;
            }
            if(samorodki[j].first - x <= s && samorodki[j].first-x>=0 && samorodki[j].second < y && samorodki[j].second+ilewdol >= y){
                wynik++;
            }
        }
        bestans = max(bestans, wynik);
    }
    cout << bestans << endl;




}