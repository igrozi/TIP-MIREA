#include <iostream>
using namespace std;

int main() {
    float x,y;
    int count = 1;
    
    cout << "Введите x: ";
    cin >> x;
    cout << "Введите y: ";
    cin >> y;

    while(true) {
        count++;
        x *= 1.1;
        if (x >= y)
            break;
    }
    
    cout << "За решетку он отправится через " << count << " дней";
}