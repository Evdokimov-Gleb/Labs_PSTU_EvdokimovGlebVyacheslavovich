#include <iostream>
#include <clocale>
#include <cstdarg>
using namespace std;
// Первый параметр type: 0 — int, 1 — double
// Второй параметр n — количество чисел
double min(int type, int n, ...) {
    va_list args;
    va_start(args, n);
    double m;
    if (type == 0)
        m = va_arg(args, int);
    else
        m = va_arg(args, double);
    for (int i = 1; i < n; i++) {
        double x = (type == 0) ? va_arg(args, int)
                               : va_arg(args, double);
        if (x < m) m = x;
    }
    va_end(args);
    return m;
}

int main() {
    setlocale(LC_ALL, ".UTF-8");
    // 1) 5 параметров типа int
    cout << "min из 5 целых чисел: "
         << min(0, 5, 17, -3, 42, 8, 0) << endl;
    // 2) 10 параметров типа double
    cout << "min из 10 вещественных: "
         << min(1, 10, 3.5, -1.2, 7.8, 0.4, -9.1, 2.2, 5.5, 8.9, 1.1) << endl;
    // 3) 12 параметров типа int
    cout << "min из 12 целых чисел: "
         << min(0, 12, 5, 9, -14, 3, 27, 0, 8, -6, 11, 2, 19) << endl;
    // 4) дополнительный вызов: 5 параметров типа double
    cout << "min из 5 вещественных: "
         << min(1, 5, 0.5, -2.5, 4.0, 1.5, -0.1) << endl;
    return 0;
}