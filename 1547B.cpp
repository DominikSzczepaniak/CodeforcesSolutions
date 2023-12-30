#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve(){
	string s;
	cin >> s;
	bool odp = true;
	map<char, bool> bylo;
	int ida;
	for(int i = 0; i<s.length(); i++){
		if(bylo[s[i]]){
			odp = false;
			break;
		}
		else{
			bylo[s[i]] = true;
		}
		if(s[i] == 'a'){
			ida = i;
		}
	}
	for(int i = 0; i<s.length(); i++){
		if(!bylo[(char)97+i]){
			odp = false;
			break;
		}
	}
	for(int i = 0; i<s.length(); i++){
		if(i < ida && s[i+1] > s[i]){
			odp = false;
			break;
		}
		if(i > ida && s[i-1] > s[i]){
			odp = false;
			break;
		}
	}
	if(odp){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}

}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--){
		solve();
	}
	return 0;
}