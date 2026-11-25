#include <iostream>
using namespace std;

struct Advertising{
    double show;
    double perc;
    double profit;
    double func(){
        return show * perc * profit;
    }
};

int main(){
    setlocale(LC_ALL,".65001");
    Advertising s;
    cout << "Введите количество показанных объявлений: ";
    cin >> s.show;
    cout << "Введите процент постетителей, которые нажали на объявление: ";
    cin >> s.perc;
    cout << "Введите сколько заработано в среденм от нажатия: ";
    cin >> s.profit;
    cout << "Доход: ";
    cout << s.func();
    return 0;
}