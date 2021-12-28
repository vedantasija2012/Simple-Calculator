#include <iostream>
#include <cmath>

using namespace std;

int addition(float num1, float num2)
{
    float result;
    result = num1 + num2;
    return result;
}
int subtraction(float num1, float num2)
{
    float result;
    result = num1 - num2;
    return result;
}
int multiplication(float num1, float num2)
{
    float result;
    result = num1 * num2;
    return result;
}
int division(float num1, float num2)
{
    float result;
    result = num1 / num2;
    return result;
}
int power(int num1, int num2)
{
    int result;
    result = pow(num1,num2);
    return result;
}
int main()
{
    char op;
    float res1, res2, res3, res4,res5,res6;
    float num1, num2;
    while (true)
    {
        cout << "\n******* Main Menu *******" << endl;
        cout << "1. Addition(+) \n2. Subtraction(-) \n3. Multiplication(*) \n4. Division(/) \n5. Exponent(^) \n";
        cout << "Enter the Operator: " << endl;
        cin >> op;
        cout << "Enter First Number: " << endl;
        cin >> num1;
        cout << "Enter Second Number: " << endl;
        cin >> num2;
        switch (op)
        {
        case '+':
            res1 = addition(num1, num2);
            cout << num1 << " + " << num2 << " = " << res1 << endl;
            break;
        case '-':
            res2 = subtraction(num1, num2);
            cout << num1 << " - " << num2 << " = " << res2 << endl;
            break;
        case '*':
            res3 = multiplication(num1, num2);
            cout << num1 << " * " << num2 << " = " << res3 << endl;
            break;
        case '/':
            res4 = division(num1, num2);
            cout << num1 << " / " << num2 << " = " << res4 << endl;
            break;
        case '^':
            res5 = power(num1, num2);
            cout << num1 << " ^ " << num2 << " = " << res5 << endl;
            break;
        default:
            cout << "ERROR! Invalid Operator. " << endl;
            break;
        }
    }
    return 0;
}