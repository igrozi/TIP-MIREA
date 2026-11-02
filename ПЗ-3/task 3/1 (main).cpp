#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter 1 number: ";
    cin >> a;
    int countOfTens = a / 10 % 10;
    cout << "Count of tens: " << countOfTens;;
}