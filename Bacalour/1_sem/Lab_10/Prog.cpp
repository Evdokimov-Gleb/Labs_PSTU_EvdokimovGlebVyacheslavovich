#include <iostream>
#include <clocale>
using namespace std;

int main(){
    setlocale(LC_ALL, ".UTF-8");
    int n, m, k;
    cout << "Введите количество строк: ";
    cin >> n;
    cout << "Введите количество столбцов: ";
    cin >> m;
    cout << "Введите номер столбца для удаления: ";
    cin >> k;
    int** a = new int*[n];
    for (int i = 0; i < n; i++) {
        a[i] = new int[m];
    }
    // Заполнение массива случайными числами
    cout << "\nИсходный массив:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] = rand() % 100;
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    // Создание нового массива без заданного столбца
    int** b = new int*[n];
    for (int i = 0; i < n; i++) {
        b[i] = new int[m - 1];
    }
    // Копирование элементов без удаляемого столбца
    for (int i = 0; i < n; i++) {
        int col = 0;
        for (int j = 0; j < m; j++) {
            if (j != k - 1) {
                b[i][col] = a[i][j];
                col++;
            }
        }
    }
    // Вывод нового массива
    cout << "\nМассив после удаления столбца "
         << k << ":\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m - 1; j++) {
            cout << b[i][j] << "\t";
        }
        cout << endl;
    }
    // Освобождение памяти
    for (int i = 0; i < n; i++) {
        delete[] a[i];
        delete[] b[i];
    }
    delete[] a;
    delete[] b;
    return 0;
}