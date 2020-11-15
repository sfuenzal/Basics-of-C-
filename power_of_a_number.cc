#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

double power_of_number(double c, double x)
{
    double power;
    power = pow(c,x);
    return power;
}

int main()
{
    double number;
    cout << "Please enter a number: " << endl;
    cin >> number;

    double number_power;
    cout << "Please enter a power for the number: " << endl;
    cin >> number_power;

    cout << "The number over the power is: " << setprecision(9) << power_of_number(number, number_power) << endl;

}