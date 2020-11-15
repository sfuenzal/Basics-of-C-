#include <iostream>

using namespace std;

double area_of_a_cuadrilateral(double b, double h)
{
    double area;
    area = (b*h)/2.0;
    return area;
}


int main()
{
    double basis;
    cout << "Please enter the value of the basis of a cuadrilateral: " << endl;
    cin >> basis;

    double height;
    cout << "Please enter the value of the height of the cuadrilateral: " << endl;
    cin >> height;

    cout << "The value of the basis is: " << basis << endl;
    cout << "The value of the height is: " << height << endl;

    cout << "The area of the cuadrilateral is: " << area_of_a_cuadrilateral(basis, height) << endl;

}