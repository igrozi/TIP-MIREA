#include <iostream>
using namespace std;

void subway(int n, int from, int to, int aux) {
    if (n == 0) {
        return;
    }
    // откладываем на вспомогательную
    subway(n - 1, from, aux, to);
    // самый большой на нужную тарелку
    cout << "Ingredient " << n << " move from " << from << " to " << to << "\n";
    // отложенные n-1 ингредиентов со вспомогательной на нужную
    subway(n - 1, aux, to, from);
}

int main() {
    int n;
    
    cin >> n;
    subway(n, 1, 3, 2);
    
    return 0;
}