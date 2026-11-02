#include <iostream>
using namespace std;

int main() {
    float m,n,t = 0;
    cin >> m >> n >> t;

    // -3 * (5*m - 3*n) - 4 * (-2*m + 7*t) =
    // = -15*m + 9*n + 8*m - 28*t = 
    // = -7*m + 9*n - 28*t
    
    double simpleResult = -7*m + 9*n - 28*t;
    cout << simpleResult;
    return 0;
}