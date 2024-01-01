#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
const int MAXX = 500000;
int k;
string s;
vector<int> poziomy;

struct Node{
	int val;
	char znak;
	int poziom;
	int id;
	Node* parent = NULL;
	Node* left = NULL;
	Node* right = NULL;
};

void update(Node& v, char zmiana){
	if(zmiana == '?'){
		v.znak = zmiana;
		if(v.poziom == k-1){
			v.val = 2;
		}
		else{
			v.val = v.left->val + v.right->val;
		}
	}
	else if(zmiana == '1'){
		v.znak = zmiana;
		if(v.poziom == k-1){
			v.val = 1;
		}
		else{
			v.val = v.right->val;
		}
	}
	else if(zmiana == '0'){
		v.znak = zmiana;
		if(v.poziom == k-1){
			v.val = 1;
		}
		else{
			v.val = v.left->val;
		}
	}
	else{
		if(v.znak == '?'){
			v.val = v.left->val + v.right->val;
		}
		else if(v.znak == '1'){
			v.val = v.right->val;
		}
		else if(v.znak == '0'){
			v.val = v.left->val;
		}
	}
	if(v.id == 1){
		return;
	}
	if(v.parent != NULL){
		return update(*v.parent, 'U');
	}
}

void solve(){
	cin >> k;
	cin >> s;
	poziomy.pb(1);
	for(int i = 1; i<=18; i++){
		poziomy.pb(1 << i);
	}
	vector<Node> in(MAXX);
	reverse(s.begin(), s.end());
	s = "." + s;
	for(int i = 1; i<=s.length(); i++){
		Node aktualna;
		int poziom = 0;
		for(int j = 0; j<poziomy.size(); j++){
			if(poziomy[j] > i){
				break;
			}
			poziom = j;
		}
		aktualna.poziom = poziom;
		if(poziom < k-1){
			aktualna.left = &in[ 2*i+1  ];
			aktualna.right = &in[2*i];
		}
		aktualna.znak = s[i];
		if(poziom != 0){
			aktualna.parent = &in[i/2];
		}
		aktualna.id = i;
		in[i] = aktualna;
	}
	for(int i = (1<<k) - 1; i>=1;i--){
		if(in[i].poziom == k-1){
			if(in[i].znak == '1' || in[i].znak == '0'){
				in[i].val = 1;
			}
			else{
				in[i].val = 2;
			}
		}
		else{
			if(in[i].znak=='?'){
				in[i].val = in[i].left->val + in[i].right->val;
			}
			else if(in[i].znak=='1'){
				in[i].val = in[i].right->val;
			}
			else{
				in[i].val = in[i].left->val;
			}
		}
	}
	// for(int i = 1; i<= (1<<k)-1; i++){
	// 	cout << i << " " << in[i].znak << " " << in[i].poziom << " " << in[i].val << endl;
	// }
	int q;
	cin >> q;
	for(int i = 0; i<q; i++){
		int a;
		char b;
		cin >> a >> b;
		a = (1<<k)-a; 
		update(in[a], b);
		// cout << "NOWA FAZA" << endl;
		// for(int i = 1; i<= (1<<k)-1; i++){
		// 	cout << i << " " << in[i].znak << " " << in[i].poziom << " " << in[i].val << endl;
		// }	
		cout << in[1].val << endl;
	}


	

	
} 
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	bool testcases = false;
	if(testcases){
		int t;
		cin >> t;
		while(t--){
			solve();
		}
	}
	else{
		solve();
	}
	return 0;	
}