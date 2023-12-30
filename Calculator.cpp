#include <iostream>
using namespace std;
int main()
{
    char op;
    float num1, num2;
    cout << "enter operator to perform operation";
    cin >> op;
    cout << "Enter two numbers on which operation is to performed";
    cin >> num1 >> num2;

    switch (op)
    {

    case '+':
        cout << "your required output is" << num1 + num2;
        break;

    case '-':
        cout << "your required output is" << num1 - num2;
        break;

    case '*':
        cout << "your required output is" << num1 * num2;
        break;

    case '/':
        cout << "your required output is" << num1 / num2;
        break;

    default:
        cout << "Error! operator is not correct";
    }

    return 0;
}
