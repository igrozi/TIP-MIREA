#include <iostream>
using namespace std;

int main() {
    const int MAX_SIZE = 100;
    int N, M;

    // N — число строк, M — число столбцов.
    if (!(cin >> N >> M) || N < 1 || N > MAX_SIZE || M < 1 || M > MAX_SIZE) {
        return 0;
    }

    int arr[MAX_SIZE][MAX_SIZE];
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (!(cin >> arr[i][j])) {
                return 0;
            }
        }
    }

    // best[i][j] — наибольшая сумма от старта до клетки (i, j).
    long long best[MAX_SIZE][MAX_SIZE];
    best[0][0] = arr[0][0];

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (i == 0 && j == 0) {
                continue;
            }

            // Сравниваем суммы сверху и слева, если обе клетки есть.
            if (i == 0) {
                best[i][j] = best[i][j - 1] + arr[i][j];
            } else if (j == 0 || best[i - 1][j] >= best[i][j - 1]) {
                best[i][j] = best[i - 1][j] + arr[i][j];
            } else {
                best[i][j] = best[i][j - 1] + arr[i][j];
            }
        }
    }

    // Маршрут содержит N + M - 1 клеток. Записываем его от финиша к старту.
    const int MAX_PATH = 2 * MAX_SIZE - 1;
    int rows[MAX_PATH], cols[MAX_PATH];
    int length = 0;
    int i = N - 1, j = M - 1;

    while (true) {
        rows[length] = i;
        cols[length] = j;
        ++length;

        if (i == 0 && j == 0) {
            break;
        }

        // Идём к соседней клетке, из которой набрали больше баллов.
        if (i > 0 && (j == 0 || best[i - 1][j] >= best[i][j - 1])) {
            --i;
        } else {
            --j;
        }
    }

    // Выводим координаты от старта к финишу.
    for (int k = length - 1; k >= 0; --k) {
        cout << rows[k] << ' ' << cols[k] << '\n';
    }
}