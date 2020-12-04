#include <iostream>

using namespace std;

void enter_the_array_with_qualifications(int n, float * A)
{
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
}

void show_the_array_with_qualifications(int n, float * A)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << endl;
    }
}

void mean_calculator(int n, float * A)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += A[i];
    }
    cout << "The mean of the qualifications is: " << sum/n << endl;
}

int main()
{
    int number_of_qualifications;
    float array_with_qualifications[number_of_qualifications];
    
    cout << "Please enter the number of qualifications to compute the mean: " << endl;
    cin >> number_of_qualifications;
    
    cout << "Please enter the qualifications to compute the mean: " << endl;
    enter_the_array_with_qualifications(number_of_qualifications, array_with_qualifications);

    cout << "The qualifications entered are: " << endl;
    show_the_array_with_qualifications(number_of_qualifications, array_with_qualifications);

    mean_calculator(number_of_qualifications, array_with_qualifications);
}
