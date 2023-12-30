#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	int n;
	cin >> n;
	vector<pair<string, int>> input(n);
	map<string, int> po;
	int MAX = INT_MIN;
	for(int i = 0; i<n; i++){
		string s;
		int p;
		cin >> s >> p;
		po[s] += p;
		input[i] = {s, p};
	}
	for(auto m : po){
		MAX = max(MAX, m.second);
	}
	set<string> s;
	for(auto& m:po){
		if(MAX==m.second){
			s.insert(m.first);
		}
	}
    map<string,int> me;
    for(auto& m:input){
        me[m.first]+=m.second;
        if(me[m.first]>=MAX && s.find(m.first)!=s.end()){
          	cout<<m.first<<"\n";
          	return 0;
        }
    }
	return 0;
}