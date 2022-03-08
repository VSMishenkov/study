#include <iostream>
using namespace std;

int main () {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a==c || b==d) {
        cout << "YES" << endl;
    }
    else if ((a-c)*(a-c) <= 1 && (b-d)*(b-d) <= 1) {
        cout << "YES" << endl;
    }
    else if (a+b == c+d || a+d == b+c) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}
