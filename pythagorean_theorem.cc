#include <iostream>
#include <math.h>

using namespace std;

float pythagorean_theorem(float l1, float l2)
{
    float l3 = sqrt( pow(l1,2) + pow(l2,2) );
    return l3;
}

int main()
{
    float first_side;
    cout << "Please enter the lenght of the first side of an right triangle: " << endl;
    cin >> first_side;

    float second_side;
    cout << "Please enter the lenght of the second side of an right triangle: " << endl;
    cin >> second_side;

    cout << "The lenght of the hyphotenuse is: " << pythagorean_theorem(first_side, second_side) << endl;
}