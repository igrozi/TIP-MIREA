#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a,b,c = 0;
    cout << "Enter 1 number: ";
    cin >> a;
    cout << "Enter 2 number: ";
    cin >> b;

    c = (a*a) + (b*b);
    cout << "Hypotenuse: " << sqrt(c);

}