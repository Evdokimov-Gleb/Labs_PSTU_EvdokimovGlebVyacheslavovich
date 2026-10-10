#include <iostream>
using namespace std;
int main(){
    int m = 7, n = 9;
    int a = m + --n;
    m = 7, n = 9;
    int b = m++ < ++n;
    m = 7, n = 9;
    int c = n-- < --m;
    cout << "m + --n = " << a << endl;
    cout << "m++ < ++n = " << b << endl;
    cout << "n-- < --m = " << c << endl;
    return 0;
}