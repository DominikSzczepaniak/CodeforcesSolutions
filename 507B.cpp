#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int r;
	double x1, y1;
	double x2, y2;
	cin >> r >> x1 >> y1 >> x2 >> y2;
	double odleglosc = sqrt((abs(y2-y1) * abs(y2-y1)) + (abs(x2-x1) * abs(x2-x1)));
	cout << ceil(odleglosc/(2*r) ) << endl;

	
	return 0;
}