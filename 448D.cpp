#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
const ll MOD = 1e9+7;

void wypisz(ll s, ll e, ll m){
	cout << s << " " << e << " " << m << endl;
}

bool mozna(ll liczba, ll n, ll m){
	for(int i = 1; i<=n; i++){
		if(liczba % i == 0 && liczba/i<=m){
			return true;
		}
	}
	return false;
}

ll oblicz_wynik(ll liczba, ll n, ll m){
	ll wynik = 0;
	liczba--;
	for(ll i = 1; i<=n; i++){
		wynik += min(m, liczba/i);
	}
	return wynik;
}

void solve()
{
	ll n, m, k;
	cin >> n >> m >> k;
	ll l_start = 1, l_end = n*m+2;
	while(l_start < l_end){
		ll l_mid = (l_start+l_end)/2;
		ll wynik = oblicz_wynik(l_mid, n, m);
		if(wynik >= k){
			l_end = l_mid;
		}
		else{
			l_start = l_mid+1;
		}
	}
	cout << l_start -1 << endl;
	
	//przejsc po kazdej linijce i binarnie wyszukac ile liczb bedzie <= od jakiejs innej liczby w danym wierszu
	// pytac o liczby <= na podstawie liczby otrzymanej z wyszukiwania binarnego
	// jesli wynik < to start = mid+1, jesli wieksze to end = mid-1 a jesli rowny to znalezlismy wynik
	// szukanie ilosci liczb jest wynikiem -> numer linijki * najwieksza mozliwa liczba zeby <= zapytana liczba 
	//wynikiem jest najwieksza mozliwa liczba zeby
	//start = 1, end = n*m;
	// O(n) -> przejscie po kazdym wierszu
	// O(log(n*m)) -> wyszukanie liczby
	// O(logn) -> znalezienie ilosci liczb w wierszu
	// O(n*logn*lognm) -> calkowita zlozonosc	
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	bool testcases = false;
	if (testcases)
	{
		int t;
		cin >> t;
		while (t--)
		{
			solve();
		}
	}
	else
	{
		solve();
	}
	return 0;
}