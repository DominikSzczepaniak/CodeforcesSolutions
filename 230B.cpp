#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define FOR(i, n, m) for(int i=n; i<m; ++i)
#define ll long long

const int MAX = 1000*1000+1;

ll tab[MAX];

void sito()
{
	tab[1] = 1;
	for (int i=2; i*i<=MAX; i++) 
    {													
        if(!tab[i])				
		for (int j = i*i ; j<=MAX; j+=i)
            tab[j] = 1;			
    }
}



void solve(){
	sito();
	int n;
	cin >> n;
	while(n--){
		ll a;
		cin >> a;
		ll start = 1;
		ll koniec = MAX;
		ll mid;
		while(start < koniec){
			mid = (start+koniec)/2;
			if(mid * mid == a){
				break;
			}
			else if(mid*mid < a){
				start = mid+1;
			}
			else{
				koniec = mid;
			}

		}
		if(mid * mid == a && !tab[mid]){ //wyszukac binarnie czy jest potega liczby pierwszej
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}

}

int main(){
	solve();
	return 0;
}