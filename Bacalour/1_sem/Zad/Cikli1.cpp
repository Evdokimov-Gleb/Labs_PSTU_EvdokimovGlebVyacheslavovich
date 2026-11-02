#include <iostream>
#include <clocale>
using namespace std;
int main(){
    setlocale(LC_ALL, ".UTF-8");
    int a, b;
    bool f = true;
    cin >> a;
    if (a != 0){
        cin >> b;
        f = (a < b) && f;
        while ((a!=b)&&(b!=0)&&f){
            f = (a < b) && f;
            if (f){
                a = b;
                cin >> b;
            }
        }
        if (f){
            cout << "Все хорошо";
        }
        else{
            cout << "Условие не выполнилось";
        }
    }
    else{
        cout << "Нет этементов";
    }
    return 0;
}