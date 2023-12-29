#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MAXN = 2e5;
const ll MOD = 1e9 + 9, P = 911382323;


int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<int> input(n);
    for(int i = 0; i<n; i++){
        cin >> input[i];
    }
    int ans = 1;
    int left = 0, right = 0;
    set<int> ile;
    map<int, int> ilosc;
    ilosc[input[left]]++;
    ile.insert(input[left]);
    pair<int, int> answer = {1,1};
    while(right < n-1){
        right++;
        ile.insert(input[right]);
        ilosc[input[right]]++;
        while(ile.size() > k){
            ilosc[input[left]]--;
            if(ilosc[input[left]]==0){
                ile.erase(input[left]);
            }
            left++;
        }
        if(right-left+1 > ans){
            ans = right-left+1;
            answer = {left+1, right+1};
        }
    }
    cout << answer.first << " " << answer.second << endl;

    return 0;
}