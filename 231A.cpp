#include <iostream>
using namespace std;
int main()
{
    int x,ans;
    cin >> x;
    ans = 0;
    for (int i = 0; i < x; i++) {
        int a, b, c, d;
        cin >> a >> b >> c;
        d = a + b + c;
        if (d >= 2) {
            ans++;
        }
        
    }
    cout << ans;
}