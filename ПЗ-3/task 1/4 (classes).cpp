#include <iostream>
#include <cmath>
using namespace std;

class Triangle {
    int a,b;

    public: Triangle(int katetA, int katetB) : a(katetA), b(katetB) {}

    void hypotenuse() {
        cout << "Hypotenuse: " << sqrt(a*a + b*b);
    }
};

int main() {
    int a,b = 0;
    cout << "Enter 1 number: ";
    cin >> a;
    cout << "Enter 2 number: ";
    cin >> b;
    Triangle krug = Triangle(a, b);
    krug.hypotenuse();
}