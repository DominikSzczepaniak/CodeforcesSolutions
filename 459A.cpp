#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MAX = 3 * 10e5;

int main(){
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	bool przeciwne = false;
	if(x1 != x2 && y1!=y2){
		przeciwne = true;
	}
	if(przeciwne){
		if(max(y2, y1) - min(y1, y2) != max(x2, x1) - min(x2, x1)){
			cout<< -1 << endl;
			return 0;
		}
		cout << x1 << " " << y2 << " " << x2 << " " << y1 << endl;
	}
	else{
		if(x1 == x2){
			int dlugoscboku = abs(y2- y1);
			if(x1 + dlugoscboku <= 1000){
				cout << x1 + dlugoscboku << " " << y1 << " " << x2+dlugoscboku << " " << y2 << endl;
			}
			else if(x1 - dlugoscboku >= -1000){
				cout << x1 - dlugoscboku << " " << y1 << " " << x2-dlugoscboku << " " << y2 << endl;
			}
			else{
				cout << -1 << endl;
			}
			return 0;
		}
		if(y1 == y2){
			int dlugoscboku = abs(x2- x1);
			if(y1 + dlugoscboku <= 1000){
				cout << x1 << " " << y1+ dlugoscboku << " " << x2 << " " << y2+ dlugoscboku << endl;
			}
			else if(y1 - dlugoscboku >= -1000){
				cout << x1  << " " << y1- dlugoscboku << " " << x2 << " " << y2- dlugoscboku << endl;
			}
			else{
				cout << -1 << endl;
			}
			return 0;
		}
	}
	

	return 0;	
}