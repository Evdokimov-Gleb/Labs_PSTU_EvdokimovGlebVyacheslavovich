#include <iostream>
#include <windows.h>
using namespace std;
const int N = 8;
int board[N][N] = {0};
int step = 0;
// Проверка безопасности позиции
bool check(int row, int col) {
    for (int i = 0; i < row; i++) {
        if (board[i][col] == 1)
            return false;
        if (col - (row - i) >= 0 &&
            board[i][col - (row - i)] == 1)
            return false;
        if (col + (row - i) < N &&
            board[i][col + (row - i)] == 1)
            return false;
    }
    return true;
}
// Вывод доски
void printBoard() {
    cout << "\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (board[i][j] == 1)
                cout << " Ф ";
            else
                cout << " . ";
        }
        cout << endl;
    }
    cout << endl;
}
// Показ действия
void showStep(string action, int row, int col) {
    step++;
    cout << "Шаг " << step << ": "
         << action
         << " (" << row + 1
         << ", " << col + 1 << ")\n";
    printBoard();
    Sleep(500);
}
// Поиск решения
bool solve(int row) {
    if (row == N)
        return true;
    // Первый ферзь ставится в третью клетку
    int start = (row == 0) ? 2 : 0;
    int finish = (row == 0) ? 3 : N;
    for (int col = start; col < finish; col++) {
        if (check(row, col)) {
            board[row][col] = 1;
            showStep("Ферзь установлен", row, col);
            if (solve(row + 1))
                return true;
            board[row][col] = 0;
            showStep("Ферзь снят (возврат)", row, col);
        }
    }
    return false;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    cout << "ЗАДАЧА О ВОСЬМИ ФЕРЗЯХ\n";
    cout << "Пошаговая расстановка ферзей\n";
    cout << "Начальная позиция: строка 1, столбец 3\n";
    cout << "\nНачальная доска:\n";
    printBoard();
    if (solve(0)) {
        cout << "\nРЕШЕНИЕ НАЙДЕНО!\n";
        cout << "Всего действий: " << step << endl;
        printBoard();
    }
    else {
        cout << "\nРешение не найдено.\n";
    }
    return 0;
}