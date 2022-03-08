#include <iostream>
using namespace std; 
int main() {
    int n, first_day;
    first_day = 7;
    cin >> n;
    cout << (n + first_day - 1)%7 << endl;
  return 0;
}
