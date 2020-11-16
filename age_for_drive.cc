#include <iostream>

using namespace std;

int main()
{
    string name_of_the_driver;
    cout << "Please enter the name of the driver: " << endl;
    cin >> name_of_the_driver;

    int n;
    cout << "Please enter the age of the driver: " << endl;
    cin >> n;

    if ( n < 18 )
    {
        cout << name_of_the_driver << " is not allowed to drive." << endl;
    }

    else if ( n > 18 )
    {
        cout << name_of_the_driver << " is allowed to drive." << endl;
    }

    else if ( n == 18 )
    {
        cout << name_of_the_driver << " is allowed to drive only in the city, not in highway." << endl;
    }

}