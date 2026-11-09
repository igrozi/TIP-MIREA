#include <iostream>
using namespace std;

void sort(int arr[], int size) {
    for(int i=0; i<size-1; i++)
        for(int j=0; j<size-i-1; j++)
            if(arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
    cout << "[ ";
    for(int i=0; i<size; i++)
        cout << arr[i] << " ";
    cout << "]" << endl;
}

bool check(int X, int calories[], int N, int D) {
    int days = 1;
    int first_pie = calories[0];

    for (int i = 1; i < N; i++)
        if (calories[i] - first_pie > X) {
            days++;
            first_pie = calories[i];
        }

    if (days <= D)
        return true;
    else
        return false;
}

int main() {
    int N;
    int D;

    cout << "Введите кол-во пирожков: ";
    cin >> N;

    cout << "Введите кол-во дней: ";
    cin >> D;

    int calories[1005]; 

    for(int i=0; i<N; i++) {
        cout << "Введите калорийность " << i+1 << " пирожка: ";
        cin >> calories[i];
    }
        
    sort(calories, N);

    for (int X = 0; ; X++) { 
        if (check(X, calories, N, D) == true) {
            cout << endl << "Минимальная возможная разница: " << X << endl;
            break;
        }
    }
}