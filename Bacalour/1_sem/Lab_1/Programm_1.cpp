#include <iostream>
using namespace std;
int main(){
    //Float
    float a = 1000.0, b = 0.0001;
    float chis_1 = (a - b) * (a - b) * (a - b);
    cout << "chis_1 = " << chis_1 << endl;
    float chis_2 = a * a * a;
    cout << "chis_2 = " << chis_2 << endl;
    float chis = chis_1 - chis_2;
    cout << "chis = " << chis << endl;
    float znam = b * b * b - 3 * a * b * b - 3 * a * a * b;
    cout << "znam = " << znam << endl;
    float rez_1 = chis/znam;
    cout << "float : rezult = " << rez_1 << endl;
    //Double 
    double a1 = 1000.0, b1 = 0.0001;
    double chis1 = (a1 - b1) * (a1 - b1) * (a1 - b1);
    cout << "chis1 = " << chis1 << endl;
    double chis2 = a1 * a1 * a1;
    cout << "chis2 = " << chis2 << endl;
    double chisl1 = chis1 - chis2;
    cout << "chisl1 = " << chisl1 << endl;
    double znam1= b1 * b1 * b1 - 3 * a1 * b1 * b1 - 3 * a1 * a1 * b1;
    cout << "znam1 = " << znam1 << endl;
    double rez1 = chisl1/znam1;
    cout << "double : rezult = " << rez1 << endl;
    return 0;
}