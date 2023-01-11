

#include <iostream>
#include <math.h>
using namespace std;
int main() {
    double R,formula;
    const double Pi = 3.14;


    cout << "enter radius -> ";
    cin >> R;
    formula = 4/3*Pi*pow(R,3);
    cout << "V circle = " << formula;


    return 0;
}