#include <iostream>
using namespace std;

int main() {
    int N, a=0, b=1, c, i=1;
    cin >> N;
    while (i < N) {
    c = a + b;
    a = b;
    b = c;
    i++;
    } 
     if (N==0) {
    cout << "0" << endl;
    }
    else if (N==1) {
    cout << "1" << endl;
    }
    else {
    cout << c << endl;
    }
  return 0;
}

