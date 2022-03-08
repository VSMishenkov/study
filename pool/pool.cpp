#include <iostream>
using namespace std;

int main () {
    int N, M, x, y, e, w, min1, min2;
    cin >> N >> M >> x >> y;
    if (N>M) {
        M = N + M;
        N = M - N;
        M = M - N;
    }
    e = N - x;
    w = M - y;
    if (x<y) {
        min1 = x;
    }
    else {
        min1 = y;
    }
    if (e<w) {
        min2 = e;
    }
    else {
        min2 = w;
    }
    if (min1<min2) {
        cout << min1 << endl;
    }
    else {
        cout << min2 << endl;
    }
}
