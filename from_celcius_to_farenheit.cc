#include <iostream>

using namespace std;

double celcius_to_farenheit(double tc)
{
    double tf;
    tf = tc*((float) 9/(float) 5)+32.0;
    return tf;
}

int main()
{
    double temperature_in_celcius;
    cout << "Please enter a temperature in Celcius degrees: " << endl;
    cin >> temperature_in_celcius;

    cout << "The temperature in Fahrenheit degrees is: " << celcius_to_farenheit(temperature_in_celcius) << "F" << endl;

}