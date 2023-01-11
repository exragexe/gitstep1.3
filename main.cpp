

#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int grn,cop,form1,form2,form3;
    cout << "Enter grn: " ;
    cin >> grn;
    cout << "Enter cop: ";
    cin >> cop;
    form1 = cop % 100;
    form2 = cop / 100;
    form3 = grn + form2;
    cout << form3<<" grn."<< form1<<" cop.";


    return 0;
}