#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double P, X, Y;
    cin >> P >> X >> Y;
    double S = X*100 + Y;
    S *= (1+P/100.0);
    cout << floor(S/100) << " " << floor(S - 100*round(S/100)) << endl;
      return 0;
}
