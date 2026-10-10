#include <iostream>
using namespace std;
int main(){
    //Float
    float a = 1000.0, b = 0.0001;
    float chis_1 = (a - b) * (a - b) * (a - b);
    float chis_2 = a * a * a;
    float chis = chis_1 - chis_2;
    float znam = b * b * b - 3 * a * b * b - 3 * a * a * b;
    float rez_1 = chis/znam;
    //Double 
    double a1 = 1000.0, b1 = 0.0001;
    double chis1 = (a1 - b1) * (a1 - b1) * (a1 - b1);
    double chis2 = a1 * a1 * a1;
    double chisl1 = chis1 - chis2;
    double znam1= b1 * b1 * b1 - 3 * a1 * b1 * b1 - 3 * a1 * a1 * b1;
    double rez1 = chisl1/znam1;
    cout << "float : rezult = " << rez_1 << endl;
    cout << "double : rezult = " << rez1 << endl;
    return 0;
}