

#include <iostream>
using namespace std;
int main() {
    double mashtab,vidstan, formula;


    cout << "Calculation of the distance between settlements." << endl;
    cout << "Enter the output data:" << endl;
    cout << "\tMap scale (number of kilometers in one centimeter) -> ";
    cin >> mashtab;
    cout << "\tThe distance between the points that represent settlements(cm) -> ";
    cin >> vidstan;
    formula = mashtab * vidstan;
    cout << "Distance between settlements: " << formula<<" km";


    return 0;
}