#include <iostream>
using namespace std;

long long fastPowerRecursive(long long x, long long n) {
    // x^n = (x^(n/2))^2
    if (n % 2 == 0) {
        long long half = fastPowerRecursive(x, n/2);
        return half * half;
    } 
    // x^n = x * x^(n-1)
    else
        return x * fastPowerRecursive(x, n-1);
}

int main() {
    long long base, exponent;
    
    cout << "Введите число (основание): ";
    cin >> base;
    
    cout << "Введите степень: ";
    cin >> exponent;
    
    long long answer = fastPowerRecursive(base, exponent);
    cout << "Результат: " << base << "^" << exponent << " = " << answer << endl;
}