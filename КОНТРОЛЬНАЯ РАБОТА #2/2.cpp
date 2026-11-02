#include <iostream>
using namespace std;

long long nod(long long a, long long b) {
    if (b == 0)
        return a;
    else
        return nod(b, a % b);
}

int main() {
    long long a, b;
    
    cout << "Введите расход Егора: ";
    cin >> a;
    cout << "Введите расход Паши: ";
    cin >> b;

    cout << "НОД: " << nod(a, b) << endl;
}