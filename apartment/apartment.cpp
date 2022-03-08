#include <iostream>
#include <math.h>
using namespace std;

int main () {
    int x, N, M, K;
    cin >> N >> M >> K;
    cin >> x;
    cout << (x-1)/(M*K)+1 << " " << (x-1)%(M*K)/K+1 << endl;
    return 0;
}
