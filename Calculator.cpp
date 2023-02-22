#include <iostream>
#include <stdio.h>
#include <math.h>

#include <stdlib.h>
using namespace std;
int32_t main()
{

    int opr;
    int num1, num2, x;
    // display different operation of the calculator
    do
    {
        cout << "Select an operation to perform a simple calculation in C++ Calculator"
                "\n1 = Addition"
                "\n2 = Subtraction"
                "\n3 = Multiplication"
                "\n4 = Division"
                "\n5 = Factorial"
                "\n6 = Square"
                "\n7 = Square Root"
                "\n8 = Exit"
                "\n \n Make a choice: ";
        cin >> opr;
        switch (opr)
        {

        // for addition operation in calculator
        case 1:
            cout << "You have selected the Addition Operation.";
            cout << "\n Please enter the two number: \n";
            cin >> num1 >> num2;
            x = num1 + num2;
            cout << "Sum of two number " << num1 << " & " << num2 << " is: " << x;
            break;

        // for subtraction operation in calculator
        case 2:
            cout << "You have selected the Subtraction Operation.";
            cout << "\n Please enter the two number: \n";
            cin >> num1 >> num2;
            x = num1 - num2;
            cout << "Subtraction of two number " << num1 << " & " << num2 << " is: " << x;
            break;

        // for multiplication operation in calculator
        case 3:
            cout << "You have selected the Multiplication Operation.";
            cout << "\n Please enter the two number: \n";
            cin >> num1 >> num2;
            x = num1 * num2;
            cout << "Product of two number " << num1 << " & " << num2 << " is: " << x;
            break;

        // for division operation in calculator
        case 4:
            cout << "You have selected the Division Operation.";
            cout << "\n Please enter the two number; \n";
            cin >> num1 >> num2;
            // while loop checks for divisor whether it is zero
            while (num2 == 0)
            {
                cout << "\n Divisor cannot be zero"
                        "\n Please enter the divisor once again: ";
                cin >> num2;
            }
            x = num1 / num2;
            cout << "\n Quotient = " << x;
            break;
           // for factorial operation in calculator
        case 5:

            int num, fact;
            cout << "You have selected the factorial Operation." << endl;
            cout << "Enter a number: ";
            cin >> num;
            fact = 1;
            for (int i = 1; i <= num; i++)
            {
                fact *= i;
            }
            cout << "The Factorial of " << num << " is: " << fact << endl;
            break;
        // to square a number in calculator
        case 6:
            cout << "You have selected the Square Operation.";
            cout << "\n Please enter any number: \n";
            cin >> num1;
            x = num1 * num1;
            cout << "Square of " << num1 << " is: " << x;
            break;
 
        case 7:      // for square root operation in calculator
            cout << "You have selected the Square Root Operation.";
            cout << "\n Please enter any number: \n";
            cin >> num;
            x = sqrt(num); // use sqrt() function to find the Square Root
            cout << " Square Root of " << num << " is:  " << x << endl;
            break; // break the function

        case 8:
            exit(0); // terminate the program
            break;
        default:
            cout << "\n Something went wrong..!!";
            break;
        }
        cout << "\n ***********************************\n";
    } while (opr != 6);
}