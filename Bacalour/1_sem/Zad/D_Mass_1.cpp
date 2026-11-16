#include <iostream>
#include <clocale>
using namespace std;
int main(){
    setlocale(LC_ALL, ".UTF-8");
    int n, s = 0;
    cout << "Введите размер массива: ";
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++){
        arr[i] = rand() % 100 + 1;
    }
    cout << "Создан массив: ";
    for (int i = 0; i < n; ++i){
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; ++i){
        s += arr[i];
    }
    cout << "Сумма: " << s << endl;
    delete[] arr;
    return 0;
}