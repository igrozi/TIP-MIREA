#include <iostream>
#include <cmath>
using namespace std;

void seekX(double a, double b, double c) {
    if (a == 0) {
        if (b == 0) {
            if (c == 0)
                cout << "Infinite solutions for x." << endl;
            else
                cout << "No solution for x." << endl;
        } else
            // если a = 0, но b != 0
            // это линейное уравнение bx + c = 0
            cout << "Linear solution: x = " << -c / b << endl;
    } else {
        // дискриминант
        double D = b*b - 4*a*c;
        if (D > 0) {
            // 2 корня если дискриминант > 0
            double x1 = (-b + sqrt(D)) / (2*a);
            double x2 = (-b - sqrt(D)) / (2*a);
            cout << "Quadratic solutions: x1 = " << x1 << endl << "x2 = " << x2 << endl;
        } else if (D == 0) {
            // один корень если дискриминант = 0
            double x = -b / (2*a);
            cout << "Quadratic solution: x = " << x << endl;
        } else
            // дискриминант < 0, нет решений
            cout << "No real solutions (D < 0)." << endl;
    }
}

int main() {
    double a,b,c = 0;
    char choice;
    cin >> a >> b >> c;
    cout << "Choose an option: (D, q, a)" << endl;
    cin >> choice;
    switch(choice) {
        // дейсвтие при D
        case 'D':
            cout << "Fedutenko Igor";
            break;
        // дейсвтие при q
        case 'q':
            seekX(a, b, c);
            break;
        // дейсвтие при a
        case 'a':
            double a,b;
            cin >> a >> b;
            cout << "S of rectangle: " << a*b << endl;
            break;
        // если неизвестный символ
        default:
            cout << "Invalid choice." << endl;
    }
}