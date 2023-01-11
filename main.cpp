

#include <iostream>

using namespace std;

int main()
{

    int year, result;

    cout << "Enter year: ";
    cin >> year;

    result = 365 + ((year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0)));

    cout <<"in "<<year<<" year: "<< result<<" days" << endl;

    return 0;
}