#include <iostream>
using namespace std;
int main()
{
    int n, x = 0;
    string k;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> k;
        if (k == "X++" || k == "++X"){
            x++;
        }
        else if (k == "X--" || k == "--X") {
            x = x - 1;
        }
    }
    cout << x;
}