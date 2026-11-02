#include <iostream>
using namespace std;

void countOfTens(int a) {
    int countOfTens = a / 10 % 10;
    cout << "Count of tens: " << countOfTens;;
}

int main() {
    int a;
    cout << "Enter 1 number: ";
    cin >> a;
    countOfTens(a);
}