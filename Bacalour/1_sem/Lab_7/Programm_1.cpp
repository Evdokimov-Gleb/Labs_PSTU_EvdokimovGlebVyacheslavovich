#include <iostream> 
#include <clocale>
using namespace std;

double del(int a, int b) {
    return (double)a / b;
}
double del(double a, double b) {
    return a / b;
}

int main(){
    setlocale(LC_ALL, ".UTF-8");
    cout << "Деление целых чисел" << endl;
    int a, b;
    cout << "Введите два целых числа: ";
    cin >> a >> b;
    if (b != 0) {
        cout << "Результат: " << del(a, b) << endl;
    }
    else {
        cout << "На ноль делить нельзя!" << endl;
    }
    cout << "Деление комплексных чисел" << endl;
    double c, d;
    cout << "Введите два комплексных числа: ";
    cin >> c >> d;
    cout << "Результат: " << del(c, d) << endl;
    return 0;
}