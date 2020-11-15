#include <iostream>
#include <math.h>
#include <iomanip>

#define PI 3.14159265

using namespace std;

double internal_angles(double a1, double a2)
{
    double a3 = 180.0 - a1 - a2;
    return a3;
}

double cosine_theorem(double l1, double l2, double angle)
{
    double l3 = sqrt( pow(l1,2) + pow(l2,2) - 2*l1*l2*cos(angle*PI/180.0) );
    return l3;
}

int main()
{
    double angle_1;
    cout << "Please enter the first internal angle of the triangle: " << endl;
    cin >> angle_1;

    double angle_2;
    cout << "Please enter the second internal angle of the triangle: " << endl;
    cin >> angle_2;

    cout << "The remaining angle is: " << internal_angles(angle_1, angle_2) << endl;

    double side_1;
    cout << "Please enter the first side of the triangle: " << endl;
    cin >> side_1;

    double side_2;
    cout << "Please enter the second side of the triangle: " << endl;
    cin >> side_2;

    cout << "The remaining side is: " << cosine_theorem(side_1, side_2, internal_angles(angle_1, angle_2)) << endl;
    
    double side_3 = cosine_theorem(side_1, side_2, internal_angles(angle_1, angle_2));
    double perimeter = side_1 + side_2 + side_3;
    
    cout << "The perimeter of the triangle is: " << perimeter << endl; 

}