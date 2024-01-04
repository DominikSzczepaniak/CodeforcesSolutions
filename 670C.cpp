#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define FOR(i, n, m) for(int i=n; i<m; ++i)
#define INSPLIT(ar) for (auto &it : ar) cin >> it
#define SORT(ar) sort((ar).begin(), (ar).end())
#define SORTD(ar) sort((ar).rbegin(), (ar).rend())
#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define testcases int t; cin >> t; while(t--)
#define twodvector(nazwa, size1, size2) vector<vector<int>> nazwa( size1 , vector<int> (size2, 0))
  
int main(){
    int n;
    cin >> n;
    vector<int> s(n);
    map<int, int> nums;
    FOR(i,0,n){
        cin >> s[i];
        nums[s[i]] += 1;
    }
    int z;
    cin >> z;
    vector<int> audio(z);
    vector<int> subtitles(z);
    FOR(i,0,z){
        cin >> audio[i];
    }
    FOR(i,0,z){
        cin >> subtitles[i];
    }
    int ansfirst = 0;
    int anssecond=0;
    int index=1;    
    FOR(i,0,z){
        if( (nums[audio[i]])  > ansfirst){
            ansfirst = (nums[audio[i]]);
            anssecond = (nums[subtitles[i]]);
            index=i+1;
        }
        else if(nums[audio[i]] == ansfirst){
            if(anssecond < nums[subtitles[i]]){
                ansfirst = (nums[audio[i]]);
                anssecond = (nums[subtitles[i]]);
                index=i+1;
            }
        }
    }
    cout << index << endl;

}