#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
	
const int MAX = 2 * 10e5;
	
int main(){
	int n;
	cin >> n;
	int piatki=0, zera=0;
	for(int i = 0; i<n; i++){
		int a;
		cin >> a;
		if(a ==5){
			piatki++;
		}
		else{
			zera++;
		}
	}
	if(zera == 0){
		cout << -1 << endl;
		return 0;
	}
	string s = "";
	int ile = 0;
	for(int i = 0; 9*i<=piatki; i++){
		ile = i;
	}
	for(int i = 0; i<9*ile; i++){
		s += "5";
	}
	if(s.length() == 0){
		s+="0";
	}
	else{
		for(int i = 0; i<zera; i++){
			s+="0";
		}
	}
	cout << s << endl;

	return 0;
}