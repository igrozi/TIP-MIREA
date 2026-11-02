#include <iostream>
using namespace std;

class Tens {
    int num;

    public: Tens(int tempNum) : num(tempNum) {}

    void countOfTens() {
        int countOfTens = num / 10 % 10;
        cout << "Count of tens: " << countOfTens;
    }
};

int main() {
    int a;
    cout << "Enter 1 number: ";
    cin >> a;
    Tens number = Tens(a);
    number.countOfTens();

}