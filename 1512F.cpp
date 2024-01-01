#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MAX = 10e6;

void solve(){
    int n, c;
    cin >> n >> c;
    vector<ll> a(n);
    vector<ll> b(n-1);
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    for(int i = 0; i<n-1; i++){
        cin >> b[i];
    }
    ll kasa = 0;
    ll dni = 0;
    vector<pair<ll, ll>> dni_pozycje_wejscie(n); //ile dni na wejscie, ile zostalo jeszcze kasy po wejsciu
    dni_pozycje_wejscie[0] = {0, 0};
    for(int i = 0; i<n-1; i++){
        if(kasa >= b[i]){
            dni++;
            kasa -= b[i];
        }
        else{
            ll ile_dni = ceil( (double)(b[i] - kasa) / (double)a[i]);
            kasa += ile_dni * a[i];
            //cout << i << " " << ile_dni << endl;
            dni += 1 + ile_dni;
            kasa -= b[i];
        }
        dni_pozycje_wejscie[i+1] = {dni, kasa};
    }
    vector<ll> dni_pozycje_zarobek(n);
    for(int i = 0; i<n; i++){
        ll koszt = ceil(  (double)(c-dni_pozycje_wejscie[i].second) / (double)a[i]);
        dni_pozycje_zarobek[i] = koszt;
    }
    // for(int i = 0; i<n; i++){
    //     cout << dni_pozycje_wejscie[i].first << " ";
    // }
    // cout << endl;
    // for(int i = 0; i<n; i++){
    //     cout << dni_pozycje_zarobek[i] << " ";
    // }
    //cout << endl;
    ll ans = INT64_MAX;
    for(int i = 0; i<n; i++){
        ans = min(ans, dni_pozycje_wejscie[i].first + dni_pozycje_zarobek[i]);
    }
    cout << ans << endl;


}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	bool testcases = true;
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
 