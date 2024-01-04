#include <iostream>
using namespace std;
int main()
{
    int x;
    string name;
    cin >> x;
    for (int i = 0; i < x; i++) {
        cin >> name;
        if (name.length() > 10) {
            cout << name[0] << int(name.length() - 2) << name[name.length() - 1] << endl;
        }
        else {
            cout << name << endl;
        }
    }
}