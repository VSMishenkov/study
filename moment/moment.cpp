#include <iostream>
using namespace std;

int main () {
    int a, b, c, d, e, f;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;
    cin >> f;
    cout << ((d*3600)+(e*60)+f)-((a*3600)+(b*60)+c);
    return 0;
}
