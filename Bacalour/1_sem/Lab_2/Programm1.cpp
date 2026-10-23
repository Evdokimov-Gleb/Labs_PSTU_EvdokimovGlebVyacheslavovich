#include <iostream>
using namespace std;
int main() {
    double e = 0.0001;
    double s = 0;
    double a;
    int n = 1;
    a = 1.0 / ((3 * n - 2) * (3 * n + 1));
    while (a >= e) 
    {
        s += a;
        n++;
        a = 1.0 / ((3 * n - 2) * (3 * n + 1));
    }
    cout << "S = " << s << endl;
    return 0;
}