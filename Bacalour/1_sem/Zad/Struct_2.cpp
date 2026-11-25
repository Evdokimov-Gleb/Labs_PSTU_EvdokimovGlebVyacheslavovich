#include <iostream>
#include <clocale>
#include <string>
#include <windows.h>
using namespace std;

struct man{
    string fio;
    int days;
    int money;
    int prem;
    void func(){
        cout << "Для " << fio << " ЗП составляет: " << days * money + prem;
    }
};

int main(){
    setlocale(LC_ALL, ".UTF-8");
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    man s;
    cout << "Введите ФИО сотрудника: ";
    getline(cin, s.fio);
    cout << "Введите количество отработанных дней: ";
    cin >> s.days;
    cout << "Введите зарплату: ";
    cin >> s.money;
    cout << "Введите размер премии: ";
    cin >> s.prem;
    s.func();
    return 0;
}