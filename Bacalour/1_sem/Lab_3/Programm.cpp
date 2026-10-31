#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a = 0.1, b = 1.0;
    double h = (b - a) / 10;
    double e = 0.0001;
    int n = 10;
    for (double x = a; x <= b + 0.000001; x += h) {
        double sn = 1;
        double term = 1;
        for (int k = 0; k < n; k++) {
            term *= -x * x / ((2 * k + 1) * (2 * k + 2));
            sn += term;
        }
        double se = 1;
        term = 1;
        int k = 0;
        do {
            term *= -x * x / ((2 * k + 1) * (2 * k + 2));
            se += term;
            k++;
        } while (abs(term) >= e);
        double y = cos(x);
        cout << "X=" << x
             << " SN=" << sn
             << " SE=" << se
             << " Y=" << y << endl;
    }
    return 0;
}