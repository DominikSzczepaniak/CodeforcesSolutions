#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main(){
	string n;
	cin >> n;
	for(int i = n.length()-1; i>=0; i--){
		if(n[i]%8==0){
			cout << "YES" << endl;
			cout << n[i] << endl;
			return 0;
		}
	}
	for(int i = n.length()-1; i>=0; i--){
		for(int j = i-1; j>=0; j--){
			string s = "";
			s+=n[j];
			s+=n[i];
			if(stoi(s) % 8 == 0){
				cout << "YES" << endl;
				cout << s << endl;
				return 0;
			}
		}
	}

	for(int i = n.length()-1; i>=0; i--){
		for(int j = i-1; j>=0; j--){
			for(int k = j-1; k>=0; k--){
				string s = "";
				s += n[k];
				s+= n[j];
				s+=n[i];
				if(stoi(s)%8==0){
					cout << "YES" << endl;
					cout << s << endl;
					return 0;
				}
			}
		}
	}
	cout << "NO" << endl;
	return 0;
}