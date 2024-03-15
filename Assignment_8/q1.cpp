#include <iostream>
using namespace std;

// // exception handling using if else block

// int factorial()
// {
//     int i, fact = 1, number;
//     cout << "Enter any Number: ";
//     cin >> number;

//     if (number > 0)
//     {
//         for (i = 1; i <= number; i++)
//         {
//             fact = fact * i;
//         }
//         // cout << "Factorial of " << number << " is: " << fact << endl;
//     }
//     else
//         cout << "Number must br greater than zero." << endl;

//     return fact;
// }

// int main()
// {
//     int fact = factorial();

//     cout << "Factorial is: " << fact << endl;
//     return 0;
// }




// exception handling using try, throw and catch.

void factorial()
{
    int i, fact = 1, number;
    cout << "Enter a number: " << endl;
    cin >> number;

    if (number < 0)
    {
        throw 1;
    }
    else
    {
        for (i = 1; i <= number; i++)
        {
            fact = fact * i;
        }
        cout << "Factorial of " << number << " is: " << endl;
        cout << fact << endl;
    }
}

int main()
{
    int i, fact = 1, number;
    // cout << "Enter a positive number: ";
    // cin >> number;

    try
    {
        factorial();
    }
    catch (int error)
    {
        cout << "Number must br greater than zero." << endl;
    }

    return 0;
}