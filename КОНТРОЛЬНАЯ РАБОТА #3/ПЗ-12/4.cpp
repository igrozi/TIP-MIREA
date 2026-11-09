#include <iostream>
using namespace std;

int N, M;
char maze[105][105];
bool visited[105][105];

int pdf_count = 0;      
bool can_escape = false; 

void dfs(int r, int c) {
    if (r < 0 || r >= N || c < 0 || c >= M)
        return;

    if (visited[r][c] == true)
        return;

    visited[r][c] = true;

    switch (maze[r][c]) {
        case '1': 
            return;
        case 'P': 
            pdf_count++;
            break;
        case 'E': 
            can_escape = true;
            break;
        case '0': 
            break;
    }

    dfs(r + 1, c);
    dfs(r - 1, c);
    dfs(r, c + 1);
    dfs(r, c - 1);
}

int main() {
    cout << "Введите N и M: ";
    cin >> N >> M;

    cout << "Введите карту лабиринта:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> maze[i][j];
            visited[i][j] = false;
        }
    }

    dfs(0, 0);

    if (can_escape == true)
        cout << "Максимальное количество pdf: " << pdf_count << endl;
    else
        cout << "Выход не найден." << endl;

}