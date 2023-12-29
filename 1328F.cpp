#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MAXN = 5e4+5;

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n,k;
    cin >> n >> k;
    vector<ll> input(n);
    vector<pair<ll, ll>> ilosc;
    for(int i = 0; i<n; i++){
        cin >> input[i];
    }
    sort(input.begin(), input.end());
    for(int i = 0; i<n; i++){
        if(ilosc.empty() || ilosc.back().first != input[i]){
            ilosc.push_back({input[i], 1});
        }
        else{
            ilosc.back().second++;
        }
        if(ilosc.back().second >= k){
            cout << 0 << endl;
            return 0;
        }
    }
    vector<ll> sumypref;
    vector<ll> sumysuff;
    vector<ll> cntpref;
    vector<ll> cntsuff;
    for(int i = 0; i<ilosc.size(); i++){
        ll sum = ilosc[i].first * ilosc[i].second;
        ll ile = ilosc[i].second;
        if(sumypref.empty()){
            sumypref.push_back(sum);
            cntpref.push_back(ile);
        }
        else{
            sumypref.push_back(sumypref.back() + sum);
            cntpref.push_back(cntpref.back() + ile);
        }
    }
    for(int i = ilosc.size()-1; i>=0; i--){
        ll sum = ilosc[i].first * ilosc[i].second;
        ll ile = ilosc[i].second;
        if(sumysuff.empty()){
            sumysuff.push_back(sum);
            cntsuff.push_back(ile);
        }
        else{
            sumysuff.push_back(sumysuff.back() + sum);
            cntsuff.push_back(cntsuff.back() + ile);
        }
    }
    reverse(sumysuff.begin(), sumysuff.end());
    reverse(cntsuff.begin(), cntsuff.end());
    ll ans = INT64_MAX;
    for(int i = 0; i<ilosc.size(); i++){
        ll k1 = max((ll)0, k - ilosc[i].second);
        ll lewe=0, prawe=0;
        if(i>0){
            lewe = min(k1, cntpref[i-1]);
        }
        prawe = max((ll)0, k1 - lewe);
        ll wynik = 0;
        if(i > 0 && lewe > 0){
            wynik += cntpref[i-1] * (ilosc[i].first-1) - sumypref[i-1];
            wynik += lewe;
        }
        if(i < ilosc.size()-1 && prawe > 0){
            wynik += sumysuff[i+1] - cntsuff[i+1] * (ilosc[i].first+1);
            wynik += prawe;
        }
        ans = min(ans, wynik);
        wynik = 0;
        lewe = 0;
        prawe = 0;
        if(i < ilosc.size()-1){
            prawe = min(k1, cntsuff[i+1]);
        }
        lewe = max((ll)0, k1-prawe);
        if(i > 0 && lewe > 0){
            wynik += cntpref[i-1] * (ilosc[i].first-1) - sumypref[i-1];
            wynik += lewe;
        }
        if(i < ilosc.size()-1 && prawe > 0){
            wynik += sumysuff[i+1] - cntsuff[i+1] * (ilosc[i].first+1);
            wynik += prawe;
        }
        ans = min(ans, wynik);
    }
    cout << ans << endl;
    
}