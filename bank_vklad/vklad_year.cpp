#include <iostream>
#include <cmath>
using namespace std;

int main() {

int x1, y1, x2, y2, s2, k;
    double p, s1;
    cin >> p >> x1 >> y1 >> k;
    s1 = x1*100 + y1;
    while (k>0) {
    s2 = (double)s1*p/100 + (double)s1;
    s1=s2;
    k=k-1;    
    }
    x2 = s2/100;
    y2 = s2%100;
    cout << x2 << " " << y2;
    return 0;
}
