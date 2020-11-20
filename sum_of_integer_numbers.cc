#include <iostream>

using namespace std;

int sum_of_integer_numbers(int n)
{
    int sum = 0;
    
    for (int i = 1; i <= n; ++i)
    {
        sum += i;
    }

    return sum;
}

int main()
{
    int number;
    cout << "Please, enter an integer number: " << endl;
    cin >> number;

    cout << "Sum = " << sum_of_integer_numbers(number) << endl;
}
