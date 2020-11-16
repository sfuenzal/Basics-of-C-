#include <iostream>

using namespace std;

int main()
{
    float n1;
    cout << "Please insert a real number: " << endl;
    cin >> n1;

    float n2;
    cout << "Please insert another real number:" << endl;
    cin >> n2;

    float sum = n1 + n2;
    float difference = n1 - n2;
    float multiplication = n1 * n2;
    float division = n1/n2;

    cout << "The sum of the numbers is: " << sum << endl;
    cout << "The difference of the numbers is: " << difference << endl;
    cout << "The multiplication of the numbers is: " << multiplication << endl;
    cout << "The division od the numbers is: " << division << endl;
}