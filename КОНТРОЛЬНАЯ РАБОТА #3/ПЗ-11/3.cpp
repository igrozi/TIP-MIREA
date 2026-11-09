#include <iostream>
using namespace std;

void sort(int arr[], int size) {
    for(int i=0; i<size-1; i++)
        for(int j=0; j<size-i-1; j++)
            if(arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
}

int main() {
    int N, K, L;
    
    cout << "Введите кол-во доступных растений (N): ";
    cin >> N;
    cout << "Введите размер букета (K): ";
    cin >> K;
    cout << "Введите лимит одинаковых растений (L): ";
    cin >> L;

    int cost[105];
    for(int i=0; i<N; i++) {
        cout << "Введите стоимость " << i+1 << " растения: ";
        cin >> cost[i];
    }

    sort(cost, N);

    int total_joy = 0;
    int collected = 0;

    for (int i = N - 1; i >= 0; i--) {
        
        for (int j = 0; j < L; j++) {
            
            if (collected < K) {
                total_joy += cost[i];
                collected++;
            }
        }
    }

    cout << "Максимальная стоимость букета: " << total_joy << endl;
    return 0;
}