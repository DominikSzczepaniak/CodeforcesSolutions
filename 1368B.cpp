#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isPrime(long long num)
{
    int skip=0;
    if(num<2)
        return false;
    else if(num==2)
        return true;
    long long limit=sqrt(num);
    if(num%2==0)
        return false;
        for(int j=3; j<=limit; j+=2){
            if(num%j==0)
                return false;
            }
    return true;
}

int main()
{
	std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
	ll n;
	cin >> n;
	vector<int> kolejne(10, 1);
	ll ile = 1;
	int i = 0;
	while(ile < n){
		ile = ile/kolejne[i];
		kolejne[i]++;
		ile = ile*kolejne[i];
		i = (i+1)%10;
		// cout << ile << " " << i <<" "<<n << endl;
	}
	vector<char> litery = {'c','o', 'd', 'e', 'f', 'o', 'r', 'c', 'e', 's'};
	string ans = "";
	for(int i = 0; i<10; i++){
		// cout << i << " " << litery[i] << " " << kolejne[i] << endl;
		for(int j = 0; j<kolejne[i]; j++){
			ans += litery[i];
		}
	}
	cout << ans << endl;
	return 0;
}