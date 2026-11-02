#include <iostream>
#include <cmath>
using namespace std;

int hypotenus(int a,int b) {
    return sqrt(a*a + b*b);
}

int main() {
    int a,b,c = 0;
    cout << "Enter 1 number: ";
    cin >> a;
    cout << "Enter 2 number: ";
    cin >> b;

    cout << "Hypotenuse: " << hypotenus(a,b);

}