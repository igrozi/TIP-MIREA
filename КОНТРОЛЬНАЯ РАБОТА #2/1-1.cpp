#include <iostream>
using namespace std;

long long fastPower(long long x, long long n) {
    long long result = 1;
    while(n > 0) {
        if (n % 2 != 0)
            result *= x;
        x *= x;
        n /= 2;
    }
    return result;
}

int main() {
    long long base, exponent;
    
    cout << "Введите число (основание степени): ";
    cin >> base;
    
    cout << "Введите степень: ";
    cin >> exponent;
    
    long long answer = fastPower(base, exponent);  
    cout << "Результат: " << base << "^" << exponent << " = " << answer << endl;

}