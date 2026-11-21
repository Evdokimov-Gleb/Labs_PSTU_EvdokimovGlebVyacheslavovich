#include <iostream>
using namespace std;
void hanoi(int n, char from, char to, char temp) {
    if (n == 1) {
        cout << "Переместить кольцо 1 со стержня "
             << from << " на стержень " << to << endl;
        return;
    }
    hanoi(n - 1, from, temp, to);
    cout << "Переместить кольцо " << n << " со стержня " << from << " на стержень " << to << endl;
    hanoi(n - 1, temp, to, from);
}
int main() {
    setlocale(LC_ALL, ".UTF-8");
    int n = 5;
    cout << "Ханойская башня: " << n << " колец" << endl;
    cout << "Пошаговое решение:" << endl << endl;
    hanoi(n, 'A', 'C', 'B');
    cout << endl << "Всего перемещений: 31" << endl;
    return 0;
}