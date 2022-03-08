#include <iostream>
using namespace std;

int main () {
    int a, b, c;
    cin >> a >> b >> c;
    if ((c%a==0 || c%b==0) && c<=a*b) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}
