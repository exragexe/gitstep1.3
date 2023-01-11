

#include <iostream>
using namespace std;
int main() {
    double leng, width, heigh,formula;


    cout << "Calculation of the volume of the parallelepiped." << endl;
    cout << "Enter external data:"<< endl;
    cout << "\tLength (cm) -> ";
    cin >> leng;
    cout << "\tWidth (cm) -> ";
    cin >> width;
    cout << "\tHeight (cm) -> ";
    cin >> heigh;
    formula = leng * width * heigh;
    cout << "Volume: " << formula;


    return 0;
}