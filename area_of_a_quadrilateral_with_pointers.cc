#include <iostream>

using namespace std;

//A pointer may point to (forgive the redundancy) to different variables during its lifetime in a program.

int main() 
{
    float * pointer;
    float basis, height, area;

    pointer = &basis;
    
    cout << "Please enter the lenght of the basis of the quadrilateral: " << endl;
    cin >> *pointer;
    
    pointer = &height;
    
    cout << "Please enter the lenght of the height of the quadrilateral: " << endl;
    cin >> *pointer;

    area = (basis*height)/2.0;

    cout << "The value of the basis is: " << basis << endl;
    cout << "The value of the height is: " << height << endl;
    cout << "The value of the area is: " << area << endl;
}