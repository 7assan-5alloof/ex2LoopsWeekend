#include <iostream>

using namespace std;

int main()
{
    // Get data from user
    int number;
    cout << "Please enter a number: ";
    cin >> number;

    // Test the number to get an evaluatable result
    while (number > 10)
    {
        int digit = number % 10 * 2;
        number /= 10;
        number -= digit;
    }

    // Check final result
    cout << "The number you entered is ";
    if (!(number == 7 || number == 0 || number == -7)) cout << "not ";
    cout << "divisible by 7";

    return 0;
}
